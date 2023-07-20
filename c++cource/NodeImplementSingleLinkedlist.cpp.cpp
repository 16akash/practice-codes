#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){ 
        // constructor
        this -> data=data;
        this -> next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        //free memory 
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free node"<<value<<endl;
    }

};
 void InsertHead(Node* &head, int d){// reference isliye liya gya taki original linked list me hi changes ho.
    // new node create
    Node* temp = new Node(d);
    temp-> next = head;// new node agla wala node se jud gya.
    head = temp;
 }
   void InsertTail( Node* &tail, int d){
     Node* temp= new Node(d);
     tail-> next = temp;
     tail= tail-> next;

   }
    void InsertMiddle(Node* &head,int position, int d){
         if(position==1){
            InsertHead(head,d);
            return;
         }
        //1st we did travesring
        Node* temp = head;
        int cnt=1;
        while(cnt<position-1){
            temp= temp->next;
            cnt++;
        }
        //creting a node for d
        Node* Nodetoinsert = new Node(d);
        Nodetoinsert->next=temp->next;
        temp->next = Nodetoinsert;
    }
    void deleteNode(int position, Node* &head){
        //deletion first or start node 
        if(position == 1){
            Node* temp = head;
            head = head -> next;
            //memory free start node
            temp->next = NULL;
            delete temp;
        }
        else{
            // deleting any middle node our last node
            Node* curr = head;
            Node* prev= NULL;
            int cnt =1;
            while(cnt <= position){
                prev = curr;
                curr = curr -> next;
                cnt++;
            }
            prev -> next = curr->next;
            curr -> next = NULL;
            delete curr;
        }
    }

 void print(Node* &head){
    Node* temp = head;
    while( temp != NULL ){
        cout<< temp-> data<<" ";
        temp= temp->next;
    }
    cout<< endl;

 }

int main(){
    // creted a new node
    Node* node1=new Node(10);    
   // cout<< node1 -> data<<endl;
   // cout<< node1 -> next<<endl;
    // head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);

    InsertTail(tail, 12);
    print(head);
    InsertTail(tail, 15);
    print(head);
    
    InsertMiddle( tail,head, 4, 22);
    print(head);
    deleteNode(4, head);
    print(head);
    
    

    
    

    return 0;
}