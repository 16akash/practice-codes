#include<iostream>
using namespace std;

//FUNCTION OVERLOADING

class ECE
{
    public:
    void fun(){
        cout<<"I am a function with no arguments"<<endl;
    }
    void fun(int x){
      cout<<"I am a function with int argement "<<endl;
    }
    void fun(double x){
        cout<<"I am a function with double argument"<<endl;
    }

};

int main(){
    ECE object;
    object.fun();
    object.fun(4);
    object.fun(4.3);
    
    return 0;
}