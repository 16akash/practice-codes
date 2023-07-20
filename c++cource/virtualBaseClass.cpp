#include<iostream>
using namespace std;


class student{
    protected:
    int roll_no;
    public:
    void set_number(int a)
   {
     roll_no=a;
     }
     void print_number(void){
        cout<<"Your roll no is "<<roll_no<<endl;
     }

};

 class test: virtual public student{
  protected:
  float maths,physics;
  public:
  void set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
  }
  void print_marks(void){
    cout<<"your marks in maths is "<<maths <<endl<<"your marks in physics is "<<physics<<endl;
  }
 };
  
   class sports: virtual public student{
    protected:
    int score;
    public:
    void set_score(int sc){
        score = sc;
    }
    void print_score(void){
        cout<<"your sports score is "<<score<<endl;
    }
   };

   class result: public test, public sports{
    private:
    float total;
    public:
    void display(void)
    {
        total = maths + physics + score;
    print_number();
    print_marks();
    print_score();
    cout<<"Your total score is "<< total<<endl;
    }
   };
int main(){
    result akash;
   akash.set_number(2022666);
   akash.set_marks(77.2, 88);
   akash.set_score(8);
    akash.display();
    return 0;
}