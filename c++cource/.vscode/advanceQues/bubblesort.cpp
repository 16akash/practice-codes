#include<iostream>
    }
    int counter=0;
using namespace std;
//BUBBLE SORT

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){

        cin>>array[i];
         int counter=0;
    while(counter<=n ){
        for(int i=0;i< n-counter;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";

    }
cout<<endl;

    return 0;
}
