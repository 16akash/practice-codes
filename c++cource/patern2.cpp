#include<iostream>
using namespace std;

int main(){
   /* int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";

            }
            else{
                cout<<"*";
            
            }
        }
        cout<<endl;
    }*/
    int n;
    cin>>n;
   int  count=1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;


        }
        cout<<endl;
    }
    return 0;
}