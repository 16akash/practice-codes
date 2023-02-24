#include<iostream>
#include<cmath>
using namespace std;
bool check(int x, int y, int z){
   int a =max(x, max(y,z));
   int b,c;
   if(a==x){
      b=y;
      c=z;
   }
   else if (a==y)
   {
      b=x;
      c=z;

   }
   else{
      b=z;
      c=x;
   }
   if(a*a==b*b+c*c){
   
      return true;
   }
   else {
      return false;
   } }
   int main (){
      int x,y,z;
      cin>>x>>y>>z;
      if(check(x,y,z)){
         cout<<"a pythagorian triplet";
      }
      else{
         cout<<"not a pythagorian triplet";
      }
      return 0;


   }



    