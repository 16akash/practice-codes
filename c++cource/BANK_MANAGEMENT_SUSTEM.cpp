#include <bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
class Bank {
    private:
    string id;
    int total;
    struct person{
        string name, ID, address;
        int contact, cash;
    }
    person[100];
  
    public://constructor
    Bank(){
        total=0;
    } 
    //total functions which can be performed
    void choice();
    void perData();
    void show();
    void update();
    void search();
    void transactions();
    void del();
    
};
void Bank::choice(){
    char ch;
    while(1)
    {
        cout<<"  PRESS..!!"<<endl;
    cout<<"1. Create new account"<<endl;
    cout<<"2. View customers list"<<endl;
    cout<<"3. Update information of existing account"<<endl;
    cout<<"4. Check the details of an existing account"<<endl;
    cout<<"5. for transaction"<<endl;
    cout<<"6. Remove existing account"<<endl;
    cout<<"7. Exit"<<endl;
    ch = getch();
    system("CLS");
    switch(ch){ //choose the action you want to perform
        case '1':
        Bank::perData();
        break;

        case '2':
        if(total == 0){
            cout<<"No data is entered"<<endl;
        }
        else{
        Bank::show();
        }
        break;

        case '3':
         if(total == 0){
            cout<<"No data is entered"<<endl;
        }
        else{
        Bank::update();
        }
        break;

        case '4':
         if(total == 0){
            cout<<"No data is entered"<<endl;
        }
        else{
        Bank::search();
        }
        break;

        case '5':
         if(total == 0){
            cout<<"No data is entered"<<endl;
        }
        else{
        Bank::transactions();
        }
        break;

        case '6':
         if(total == 0){
            cout<<"No data is entered"<<endl;
        }
        else{
        Bank::del();
        }
        break;
        case '7':
        exit(0);
        break;
        default:
        cout<<"Invalid input"<<endl;
        break;

    }
}
}  
void Bank::perData(){
    cout<<"Enter data of person "<<total+1<<endl;
    cout<<"Enter name: ";
    cin>>person[total].name;
    cout<<"ID: ";
    cin>>person[total].ID;
    cout<<"Adress: ";
    cin>>person[total].address;
    cout<<"Contact: ";
    cin>>person[total].contact;
    cout<<"Total Cash: ";
    cin>>person[total].cash;
    total++;

}

void Bank::show(){
    for(int i=0;i<total;i++){
        cout<<"Data of person "<<i+1<<endl;
        cout<<"Name: "<<person[i].name<<endl;
        cout<<"ID: "<<person[i].ID<<endl;
        cout<<"Address: "<<person[i].address<<endl;
        cout<<"Contact: "<<person[i].contact<<endl;
        cout<<"Cash: "<<person[i].cash<<endl;
    }
}

void Bank::update(){
    cout<<"Entr id of user those data you want to update"<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
        if(id == person[i].ID){
        cout<<"Previous data"<<endl;
        cout<<"Data of person "<<i+1<<endl;
        cout<<"Name: "<<person[i].name<<endl;
        cout<<"ID: "<<person[i].ID<<endl;
        cout<<"Address: "<<person[i].address<<endl;
        cout<<"Contact: "<<person[i].contact<<endl;
        cout<<"Cash: "<<person[i].cash<<endl;
        cout<<"\n Enter new data"<<endl;
         
    cout<<"Enter name: ";
    cin>>person[i].name;
    cout<<"ID: ";
    cin>>person[i].ID;
    cout<<"Adress: ";
    cin>>person[i].address;
    cout<<"Contact: ";
    cin>>person[i].contact;
    cout<<"Total Cash: ";
    cin>>person[i].cash;
    
      break;
        }
        if(i==total-1){
            cout<<"No such record found"<<endl;
        }
    }
}

 void Bank:: search(){
    cout<<"Entr id of user those data you want to search"<<endl;
    cin>>id;
    for(int i = 0;i< total;i++){
        if(id==person[i].ID){
       // cout<<"Data of person "<<i+1<<endl;
        cout<<"Name: "<<person[i].name<<endl;
        cout<<"ID: "<<person[i].ID<<endl;
        cout<<"Address: "<<person[i].address<<endl;
        cout<<"Contact: "<<person[i].contact<<endl;
        cout<<"Cash: "<<person[i].cash<<endl;
        break;
        }
        if(i==total-1){
            cout<<"No such record found"<<endl;
        }
    }

 } 

  void Bank::transactions(){
    char ch;
    int cash;
    cout<<"Entr id of user those data you want to transact"<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
        if(id==person[i].ID){
            cout<<"Name: "<<person[i].name<<endl;
            cout<<"Address: "<<person[i].address<<endl;
            cout<<"Contact: "<<person[i].contact<<endl;
            cout<<"\nExisting cash "<<person[i].cash<<endl;
            cout<<"Press 1 to deposit"<<endl;
            cout<<"Prewss 2 to withdraw"<<endl;
            ch = getch();
            switch(ch){
                case '1':
                cout<<"How much cash you want to deposit?"<<endl;
                cin>>cash;
                person[i].cash = person[i].cash + cash;
                cout<<"Your total cash is"<<person[i].cash<<endl;
                break;
                case '2':
            
                 cout<<"How much cash you want to withdraw?"<<endl;
                 cin>>cash;
                 if(cash>person[i].cash){
                    cout<<"Your existing cash is just "<<person[i].cash<<endl;
                  //  sleep(3000); // there will be a wait time of 3000miliseconds
                   // goto back; //after wait it go back to case 2.
                   
                 }
                 else{
                       person[i].cash = person[i].cash - cash;
                        cout<<"Your existing cash after withdraw is just "<<person[i].cash<<endl;
                        break;
                        default:
                        cout<<"Invalid Input please Enter correct number"<<endl;
                        break;
                 }
                 
                 
            }
            break;
        }
        if(i==total-1){
            cout<<"No such record found"<<endl;
        }
    }

  }


  void Bank::del(){
    char ch;

    cout<<"Press 1 to remove specific record"<<endl;
    cout<<"Press 2 to remove full record"<<endl;
    ch = getch();
    switch(ch){
        case '1':
        cout<<"Enter id of student those data you want to delete"<<endl;
        cin>>id;
        for(int i =0;i<total;i++){
            if(id == person[i].ID){
                for(int j =i;j<total;j++){

                person[j].name = person[j+1].name;
                 person[j].ID = person[j+1].ID;
                  person[j].address = person[j+1].address;
                   person[j].contact = person[j+1].contact;
                    person[j].cash = person[j+1].cash; 
                    total--;
                    cout<<"Your required data is deleted"<<endl;
                    break;
                }
                    
            }
            if(i=total-1){
                cout<<"No such record found"<<endl;
            }
        }
        break;
        case '2' :
        total = 0;
        cout<<"All record  is deleted"<<endl;
        break;
        default:
        cout<<"Invalid Input"<<endl;
        break;
    }

  }

int main()
{
    Bank b;
    b.choice();
    return 0;
}