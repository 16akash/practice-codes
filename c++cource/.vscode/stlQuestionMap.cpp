#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]=m[s]+1;//s ko map me store karenge taki uska frequency count ho sake

    }
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
