#include<iostream>
using namespace std;
class A{
    public:
    virtual void get(){
        cout<<"A"<<endl;
    }
    void print(){
        cout<<"print a"<<endl;
    }
};
class B : public A{
    public:
    // void get(){
    //     cout<<"b"<<endl;
    // }
    void print(){
        cout<<"print b"<<endl;
    }
};
int main(){
    A *aptr;
    B derived;
    aptr=&derived;
    aptr->get();
    aptr->print();
    return 0;
}