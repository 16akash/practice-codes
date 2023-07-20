#include<iostream>
using namespace std;
class Animals{
    int age;
    int weight;
    public:
    void bark(){
        cout<<"barking on"<<endl;
    }
};
class Humans{
    public:
    string colour;
    public:
    void speak(){
        cout<<"speaking on"<<endl;
    }
};
//multiple inheritance
class hybrid: public Animals, public Humans{

};

int main(){
    hybrid obj1;
    obj1.speak();
    obj1.bark();
    
    return 0;
}