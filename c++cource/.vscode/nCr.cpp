#include<iostream>
using namespace std;

int fact( int n){
   int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;// same as factorial=factorial*i
    }
    return factorial;
}


int main(){
    int n,r;
    cin>>n>>r;

    int ans1=fact(n);
    int ans2=fact(r);
    int ans3=fact(n-r);

    int ans4=ans2*ans3;

    int ans5=ans1/ans4;

    cout<<ans5<<endl;
    
    return 0;
    



}