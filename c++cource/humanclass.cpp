#include<iostream>
using namespace std;
 class Human{
    private:
    int height;
    public:
    int weight;
    private:
    int age;
    public:
    int getage(){
        return this->age;
            
        }
        void setweight(int w ){
            this->weight = w;
    }
 };
 class male: public Human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    } 
    int getheight(){
        return this->height;
    }

 };
int main(){

male m1;
cout<<m1.getheight()<<endl;








   /* male object1;
     cout<<object1.age<<endl;
     cout<<object1.weight<<endl;
     cout<<object1.height<<endl;
     cout<<object1.color<<endl;
     object1.sleep();
    object1.getage()*/


    return 0;
}