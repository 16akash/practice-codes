#include<iostream>
 using namespace std;
  int main(){
      int age;
      cout<<"tell me your age"<<endl;
      cin>>age;

      switch (age)

      {
      case 18:
          cout<<"you are 18"<<endl;

          break;
      case 20:
      cout<<"you are 20"<<endl;
      break;
      case 30:
      cout<<"you are 30"<<endl;
      break;

      default:
      cout<<"no special cases"<<endl;
          break;
      }
      
      
      
      return 0;
  }


