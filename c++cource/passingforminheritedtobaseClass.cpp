#include<iostream>
using namespace std;
 class a {
    public:
    a(){
        cout<<"This is base class consructor"<<endl;

    }
    a(int x){
        cout<<"This is base class constructor with value "<<x<<endl;
    }
 };
  
  class b: public a {
    public:
    b(): a(2){
        cout<<"This is inherited class construcotor"<<endl;
    }
    b(int y) {
        cout<<"This is inherited class constructor with value "<<y<<endl;
    }
    
  };

int main(){
    b obj(3);
    return 0;
}