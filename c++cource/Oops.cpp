#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    void printinfo(){
        cout<<"name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;

    }
    bool operator ==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;

        }
        return false;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
     cout<<"name : ";
        cin>>arr[i].name;
        cout<<"age : ";
        cin>>arr[i].age;
        cout<<"gender : ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();}
        student a("Urvi",20,1);
        student b("rahul",21,0);
       student c=a;
     
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    return 0;
}