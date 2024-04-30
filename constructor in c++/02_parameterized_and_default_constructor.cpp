#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex(int,int);//constructor declaration
void printNumbers(){
    cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
}
};
complex::complex(int x,int y){ //-->parameterized constructor with two arguments
     a=x;
     b=y;
}
int main(){
//implicit call
complex a(3,7);
a.printNumbers();
//explicit call
complex b=complex(7,9);
b.printNumbers();
return 0;
}