#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this-> data=d;
        this-> next= NULL;

    }
     ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<value<<endl;
     }
};

void insertNode(Node* &tail, int element, int d){
    
    //empty list
    if(tail== NULL){
        Node* newNode= new Node(d);
        tail=newNode;
       newNode-> next= newNode;//circular ban gya->next apne aap par hi aa rha hai
    }
    else{
        //non-empty list
        //assuming that the element is present in the list
       Node* curr = tail;
       while(curr->data != element){
        curr = curr-> next;
       }
       //element found -> curr is representing  elemnet wala node
        Node*temp = new Node(d);
        temp -> next = curr-> next;
        curr -> next= temp;
    }
}
void print (Node* tail){
    
    Node* temp = tail;
    //empty list
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
   do{
    cout<< tail -> data <<" ";
    tail = tail -> next;
   }while(tail!= temp);
   cout<<endl;
}
 
  void deleteNode(Node* &tail,int value){

    //empty list
    if(tail== NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        //NON_EMPTY
        //assuming that "value" is present in the link list
        Node* prev = tail;
        Node* curr = prev-> next;
        while(curr-> data!= value){
            prev=curr;
            curr=curr-> next;
        }
        prev -> next = curr->next;
        //1 node linked list
        if(curr== prev){
            tail=NULL;
        }
        //>=2 node linked list
        if(tail==curr){
            tail=prev;
        }
        curr->next= NULL;
        delete curr;
    }
  }

int main(){
    Node* tail= NULL;
    insertNode(tail,5,3);
    print( tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
     insertNode(tail,5,6);
    print(tail);
    deleteNode(tail,6);
    print(tail);
    
    
    return 0;
}