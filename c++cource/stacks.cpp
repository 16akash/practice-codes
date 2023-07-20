#include<iostream>
#include<stack>
using namespace std;
class Stack {
    //properties
    public:
    int *arr;
    int top;
    int size;
    //Behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
       if(size - top > 1){
        top++;
        arr[top] = element;
       } else{
        cout<<"stack overflow"<<endl;
       }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        } else{cout<<"stack is not empty"<<endl;
        return -1;
        }
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        else {
            return false;
            }
    }
};

int main() {
     Stack st(5);
    // //Using stl, stack implimentation
    // stack<int>s;
    // s.push(3);
    // if(s.empty()){

    //     cout<<"stack is empty"<<endl;
    // }
    
    // cout<<"top element "<<s.top()<<endl;
          //.....Using array.....//
         
          st.push(4);
           st.push(3);
            st.push(6);
     cout<<st.peek()<<endl;
    
    return 0;
}