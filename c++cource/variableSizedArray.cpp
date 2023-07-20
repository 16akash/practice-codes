#include<iostream>
using namespace std;

int main(){
    int n,q,s=0;
    cin>>n>>q;
    int *arr[n];
    while(n--){
        int k;
        cin>>k;
        
            arr[s]=new int[k];
            for(int i=0;i<k;i++){
                cin>>arr[s][i];
            }
            s++;

        }
        while(q--){
            int a,b;
            cin>>a>>b;
            cout<<arr[a][b]<<endl;
        }
    
    
    return 0;
}