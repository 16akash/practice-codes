#include<iostream>
#include<cmath>
using namespace std;
bool isprime( int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
  
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b;i++){
        if(isprime(i))//if stament true case ke liye hi use kiya jata hai.
        {
           cout<<i<<endl;
        }
    }
    
    return 0;
}