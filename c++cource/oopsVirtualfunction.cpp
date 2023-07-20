#include<iostream>
using namespace std;
class base {
    public:
    virtual void print(){
        cout<<"This is the base class's print display"<<endl;
    }
    void display(){
        cout<<"This is the base class's diaplay function"<<endl;
    }
};
class derived: public base{
    public:
     void print(){
        cout<<"This is the derived class's print display"<<endl;
    }
    void display() {
        cout<<"This is the derived class's diaplay function"<<endl;
    }
};

int main(){
     base *basepointer;
     derived d;
     basepointer= &d;

     basepointer -> print();
     basepointer -> display();
    return 0;
}