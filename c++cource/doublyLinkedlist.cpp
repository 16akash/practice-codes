#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor
    Node(int d){
        this->data=d;
        this-> prev= NULL;
        this-> next= NULL;
    }
    ~Node(){
        int val = this-> data;
        if(next!=NULL){
            delete next;
            next= NULL;

        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
//traversed a linked list
void print(Node* head){
   Node* temp= head;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;//aage badate jao temp ko.
   } 
   cout<<endl;
}
// give length of linked list 
int getLength(Node* head){
    int len=0; 
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp= temp->next;
    }
    return len;
}
//insertion karne ka tarika
 void insertAtHead(Node* &head, int d){
   Node* temp= new Node(d); 
   temp->next=head;
   head->prev=temp;
   head= temp;
 }
   
   void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail= temp;

   }
    
  void  insertAtPosition(Node* &tail, Node* &head, int position, int d){
      //insert at head
      if(position== 1){
        insertAtHead(head,d);
        return;
      }
      Node* temp = head;
      int cnt = 1;
      while( cnt < position-1){
        temp = temp->next;
        cnt++;
      }
      //inserting at last position 
      if(temp->next== NULL){
        insertAtTail(tail, d);
        return;
      }
      //insert at  middle
       Node* nodeToInsert = new Node(d);
       nodeToInsert->next= temp->next;
       temp->next->prev= nodeToInsert;
       temp->next= nodeToInsert;
       nodeToInsert->prev= temp;
  }

      void deleteNode(int position, Node* &head){
        //deleting first or start node
        if(position == 1){
            Node* temp = head;
            temp->next->prev= NULL;
            head= temp->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            //deleting any misddle node or any last node
            Node* curr = head;
            Node* prev = NULL;
            int cnt= 1;
            while(cnt < position){
                prev = curr;
                curr = curr -> next;
                cnt++;
            }
           curr -> prev =NULL;
           prev -> next= curr-> next;
           curr -> next= NULL;
            delete curr;

        }
      }

int main(){
    Node* node1= new Node(10);
    Node*head= node1;
    Node* tail= node1;

    print(head);
   // cout<<getLength(head)<<endl;

    insertAtHead(head, 11);
    print(head);
     insertAtHead(head, 13);
    print(head);
     insertAtHead(head, 8);
    print(head);
    insertAtTail(tail,25);
    print(head);
    insertAtPosition(tail, head, 2, 100);
    print(head);
  insertAtPosition(tail, head, 7, 101);
    print(head);
    deleteNode(6,head);
    print(head);

    return 0;
}