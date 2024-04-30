#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 5;

    // Arithmetic operators
    cout << "The value of a+b is  " << a + b << endl;
    cout << "The value of a-b is  " << a - b << endl;
    cout << "The value of a*b is  " << a * b << endl;
    cout << "The value of a/b is  " << a / b << endl;
    cout << "The value of a%b is  " << a % b << endl;
    cout << "The value of a++ is  " << a++ << endl;
    cout << "Th value of ++a  is  " << ++a << endl;
    cout << "Th value of a--  is  " << a-- << endl;
    cout << "The value of --a is  " << --a << endl<<endl;

    // Assignment operators-->used to assign values to variables
    // int a=6;float c=78.5;
    // char w='a';

    // comparision operators
    cout << "The value of a==b is  " << (a == b) << endl;
    cout << "The value of a>b  is  " << (a > b) << endl;
    cout << "The value of a<b  is  " <<(a < b) << endl;
    cout << "The value of a>=b is  " << (a >= b) << endl;
    cout << "The value of a<=b is  " << (a <= b) << endl;
    cout << "The value of a!=b is  " << (a != b) << endl<<endl;

    //Logical operators
     cout << "The value of logical and operator ((a==b)&&(a<b)) is : " <<((a==b)&&(a<b)) << endl;
    cout << "The value of logical or operator ((a==b)||(a<b)) is : " <<((a==b)||(a>b)) << endl;
    cout << "The value of logical not operator !(a==b)  is : " <<!(a==b) << endl;
    return 0;
}