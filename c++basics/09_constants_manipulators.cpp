#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //   int a=98;
    // cout<<"the value of a was: "<<a<<endl;
    //   a=56;
    //  cout<<"the value of a is: "<<a<<endl;

    const int a = 98;
    cout << "the value of a was: " << a << endl;
    // a=56; //throws an error as a is constant
    cout << "the value of a is: " << a << endl;

    // manipulators
    int x = 1, y = 11, z = 11111;
    cout << "The value of x without setw  is :" << x << endl;
    cout << "The value of y without setw  is :" << y << endl;
    cout << "The value of z without setw  is :" << z << endl;

    cout << "The value of x with setw  is :" << setw(5) << x << endl;
    cout << "The value of y with setw  is :" << setw(5) << y << endl;
    cout << "The value of z with setw  is :" << setw(5) << z << endl;
    return 0;
}