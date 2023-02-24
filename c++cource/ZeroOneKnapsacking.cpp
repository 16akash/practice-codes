#include<iostream>
using namespace std;
int knapsacking(int value[],int wt[], int n, int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsacking(value,wt,n-1,W);
    }
    return max(knapsacking(value,wt,n-1,W-wt[n-1]), knapsacking(value,wt,n-1,W));
}

int main(){
   int value[]={100,50,150};
   int wt[]={10,20,30};
   int W=50;
   cout<<knapsacking(value,wt,3,W)<<endl;

    return 0;
}