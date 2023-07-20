// #include<iostream>
// using namespace std;
// class xyz {
//     int x, y;
//     public:
//     void getdata(){
//         x=10; y=20;
    

//     }
//     public:
//     void putdata
// }

// int main(){
   
//     return 0;
// }
#include <iostream>

using namespace std;

class xyz{
    int x,y;
    public:
    void getdata(){
        x =10,y = 20;
}
public :
void putdata(){
    cout<<"x="<<x<<"y="<<y;
    
}
};

main(void){
    xyz abc;
    abc.getdata();
    abc.putdata();
    
    return 0;
}