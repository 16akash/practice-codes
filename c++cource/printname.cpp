#include<iostream>
using namespace std;
void printname( int n){
    if(n==0){
        return 0;
    }
    return printname(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<printname(n)<<endl;
    return 0;
}