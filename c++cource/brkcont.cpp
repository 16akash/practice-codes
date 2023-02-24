#include<iostream>
using namespace std;
 int main()
 {

 /*for(int i=0; i<100;i++)
 {
     if(i%3==0){
         continue;

     }
     cout<<i<<endl;

 }*/
 int num;
 cin>>num;
 int i;
 for( i=2;i<num;i++){
     if(num%i==0){
         cout<<"it is non prime"<<endl;
         break;

     }
    
 }
     if(i==num){
         cout<<"prime"<<endl;

     }
 

 return 0;
 }