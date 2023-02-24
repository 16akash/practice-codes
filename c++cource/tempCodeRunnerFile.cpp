#include<iostream>

using namespace std;

int c =45;

int main(){
    int a,b,c;
    cout<<"enter numeber a"<<endl;
    cin>>a;
    cout<<"enter number b"<<endl;
    cin>>b;
    c =a+b;
    cout<<"the sum of a and b is "<<c<<endl;
    cout<<"the value of global c is "<<::c;//scope of variable ::.it is used to assign global value
    return 0;

}