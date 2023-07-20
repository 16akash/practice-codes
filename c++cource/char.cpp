#include<iostream>
using namespace std;
    int count=0;
int getlenth( char name[]){
for(int i=0;name[i]!='\0';i++){
    count++;
}
return count;
}

int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"the length is"<<getlenth(name)<<endl;
    
    return 0;
}