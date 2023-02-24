#include<iostream>
#include<climits>
using namespace std;

//MAXIMUM CIRCULAR SUBARRAY SUM

int kadanes(int array[], int n){
    int currentsum=0;
    int maxsum=0;
    for( int i=0;i<n;i++){
        currentsum=currentsum+array[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];

    }
    int sum=0;
    int nonwrapsum=0;
    int wrapsum=0;

    for(int i=0;i<n;i++){
        
        sum=sum+array[i];
        array[i]=-array[i];
        nonwrapsum=kadanes(array,n);
        wrapsum=sum+nonwrapsum;
        
  }
  cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}