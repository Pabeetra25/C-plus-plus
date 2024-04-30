#include<iostream>
using namespace std;
class complex{
int a,b;
public:
 // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
//constructor declaration always on public section
complex();
void printNumbers(){
    cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
}
};
 complex::complex(){//-->default constructor as it takes no parameter
     a=0;
     b=0;
// cout<<"In the top of Burja Khalifa"<<endl;
}
int main(){
   // complex c; //or calso be below line
complex c1,c2,c3;
//c.printNumbers();
c1.printNumbers();
c2.printNumbers();
c3.printNumbers();
return 0;
}