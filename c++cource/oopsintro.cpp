#include<iostream>
using namespace std;

class hero{
    private:
int health;
public:

char level;
hero(){
    cout<<"constructor called"<<endl;
}
//parameterised constructor 

void print(){
    cout<<level<<endl;
}
int getterhealth(){
    return health;
}
char getterlevel(){
    return level;
}
void sethealth(int h){
    health = h;
}
void setlevel(char l){
    level = l;
}
};

int main(){
//statically
    cout<<"HI"<<endl;
    hero ramesh;
    cout<<"hello "<<endl;
   /* //staticaal allocation
   hero a;
    a.sethealth(80);
    a.setlevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getterhealth()<<endl;
    //dynamical aalocation
    hero *b=new hero;
    b->setlevel('A');
    b -> sethealth(40);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getterhealth()<<endl; 
    */
 //  dynamically
   hero *h= new hero;

    
    return 0;
}