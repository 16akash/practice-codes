#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<< " "<<arr[i];
        
    }
    int temp;
     for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i+1];
            arr[i]=temp;
            arr[i+1]=arr[i];
        }
        cout<<arr[i];
        
    }
     
    
    return 0;
}