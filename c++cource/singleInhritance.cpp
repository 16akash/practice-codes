#include<iostream>
using namespace std;
class Animals{
    public:
    int age=12;
    int weight=90;
    
   public:
   void speak(){
cout<<"speaking"<<endl;
    }
};
class dog: public Animals{//example of single inheritance

};
class germanShephard : public dog{//example of multilevel inheritance

};

int main(){
    dog a;
    germanShephard g;
    a.speak();
    g.speak();
    cout<<a.age<< g.weight<<endl;
    return 0;
}