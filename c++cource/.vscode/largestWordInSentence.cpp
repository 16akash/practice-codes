#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int currentlen=0,maxlen=0;
    while(1){
        if(arr[i]==' '|| arr[i]=='\0'){
            if(currentlen>maxlen){
                maxlen=currentlen;
            }
            currentlen=0;
        }
        else
        currentlen++;
        if(arr[i]=='\0')
        break;
        i++;

    }
    cout<<maxlen<<endl;

    return 0;
}