#include<iostream>
using namespace std;
int main(){
/*int a,b;
cout<<"enter a and b"<<endl;
cin>>a>>b;
for(int num=a;num<=b;num++){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
        cout<<num<<endl;

    }
}*/
// switch case example:-
/*char button;
cout<<"enter a charater"<<endl;
cin>>button;

switch (button)
{
case 'a':
cout<<"hello"<<endl;
    break;
case 'b':
cout<<"jai shree ram"<<endl;
break;
case 'c':
cout<<"jai shree krishna"<<endl;
break;
case 'd':
cout<<"OO bolo radhe radhe"<<endl;
break;

default:
cout<<"HAM PAGLA GAYE HAI KYA TIPEYE";
    break;
}*/
// example of simple calculator:-
/*int n1,n2;
cout<<"enter two numbers that you want to simplify"<<endl;
cin>>n1>>n2;
char op;
cout<<"enter a operator"<<endl;
cin>>op;
switch (op)
{
case '+':
    cout<<n1+n2<<endl;
    break;
  case '-':
    cout<<n1-n2<<endl;
    break;
     case '*':
    cout<<n1*n2<<endl;
    break;
    case '/':
    cout<<n1/n2<<endl;
    break;
default:
cout<<"ham pagla gaye hai dusra operator daliye"<<endl;
    break;
}*/
//examples of operators
int n;
cin>>n;
if(n%2==0 && n%3==0){
    cout<<"divided by both"<<endl;
    }
    else if (n%2==0)
    {
        cout<<"divided by only two"<<endl;
    }
    else if (n%3==0)
    {
        cout<<"divided by only three"<<endl;
    }
    else{
        cout<<"not divided by any one"<<endl;

    }

    return 0;
}