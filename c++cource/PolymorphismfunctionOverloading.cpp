#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"hello akash kumar"<<endl;
    }
    int sayHello(char name){
        cout<<"hello akash kumar"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
    return 0;
}