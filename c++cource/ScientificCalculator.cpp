#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();
void birthcalculator();
int main()
{
    cout << "\t\t SCIENTIFIC CALCULATOR ZONE\n"
         << endl;
    cout << "****Press 0 to quit the computation****\n"
         << endl;
    cout << "Enter 1 for addition\n";
    cout << "Enter 2 for subtraction\n";
    cout << "Enter 3 for multiplication\n";
    cout << "Enter 4 for division\n";
    cout << "Enter 5 for factorial\n";
    cout << "Enter 6 for power\n";
    cout << "Enter 7 for square\n";
    cout << "Enter 8 for cube\n";
    cout << "Enter 9 for squareroot\n";
    cout << "Enter 10 for birthcalculator\n\n";

    int choice;
    while (1)
    {

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            factorial();
            break;
        case 6:
            power();
            break;
        case 7:
            square();
            break;
        case 8:
            cube();
            break;
        case 9:
            squareroot();
            break;
        case 10:
        birthcalculator();
        break;
        case 0:
            exit(0);
            break; // no problem if we dont use break here

        default:
            cout << "***CAN'T RECOGNISE!! ENTER VALID CHOICE***\n\n";
            break;
        }
    }
    return 0;
}
void addition()
{
    cout << "Enter the value you want to add: ";
    int a, b;
    cin >> a >> b;
    cout << "The addition of " << a << "and" << b << " is " << a + b << endl;
}
void subtraction()
{
    cout << "Enter the value you want to subtract: ";
    int a, b;
    cin >> a >> b;
    cout << "The subtraction of " << a << "and" << b << " is " << a - b << endl;
}
void multiplication()
{
    cout << "Enter the value you want to multiply: ";
    int a, b;
    cin >> a >> b;
    cout << "The multiplication of " << a << "and" << b << "is" << a * b << endl;
}
void division()
{
    cout << "Enter the  value you want to divide: ";
    int a, b;
    cin >> a >> b;
    cout << "The division of " << a << "and" << b << "is" << (float)a / (float)b << endl;
}
void factorial()
{
    cout << "Enter the number you want factorial of: ";
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
}
void power()
{
    cout << "Enter the base and exponent: ";
    double b, e;
    cin >> b >> e;
    double power = pow(b, e);
    cout << "The solution for base" << b << "and exponent " << e << " is " << power << endl;
}
void square()
{
    cout << "Enter the value you want the square of: ";
    double b;
    cin >> b;
    double power = pow(b, 2);
    cout << "The square of " << b << " is " << power << endl;
}
void cube()
{
    cout << "Enter the value you want the cube of: ";
    double b;
    cin >> b;
    double power = pow(b, 3);
    cout << "The cube of" << b << " is " << power << endl;
}
void squareroot()
{
    cout << "Enter the number you want the square root of :";
    double n;
    cin >> n;
    double squareRoot = sqrt(n);
    cout << "The squareroot of " << n << "is" << squareRoot << endl;
}
void birthcalculator()
{
    int a,b,c,d;
    cout<<" Enter your birth year : ";
    cin>>a;
    cout<<endl;
    cout<<" Enter your birth month : ";
    cin>>b;
    cout<<endl;
    cout<<" Enter your birth day : ";
    cin>>c;
    cout<<endl;
    cout<<" Enter current year : ";
    cin>>d;
    cout<<endl;
    cout<<" your Total year is : "<<d-a<<endl;
    cout<<" your Total month is : "<<12-b<<endl;
    cout<<" your Total days is : "<<30-c<<endl;

}
