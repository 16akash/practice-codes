#include<iostream>
using namespace std;
int printOnetoN(int i,int n){
    if(i<1){
        return 0 ;
    
    }
    printOnetoN(i-1,n);
    cout<<i<<endl;


}
int main(){
    cout<<printOnetoN(3,3)<<endl;
    
    return 0;
}