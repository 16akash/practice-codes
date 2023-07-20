#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
public:
void speak(){
    cout<<" barking"<<endl;//jab ye speak function yanha rahega to
}                          //main me yahi call hoga
        //aur nahi rahega to animal wala speak function call hoga
};
int main(){
    Dog obj;
    
    obj.speak();
  
    
    return 0;
}