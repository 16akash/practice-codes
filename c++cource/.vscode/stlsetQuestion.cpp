#include<bits/stdc++.h>
using namespace std;
/*void print(set<string>&s){
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
}*/

int main (){
    set<string>s;

int n;
cin>>n;
for(int i=0;i<n;i++){
    string str;
    cin>>str;
    s.insert(str);
}

for(auto it=s.begin();it!=s.end();it++){
 cout<<*it<<endl;
}
}
