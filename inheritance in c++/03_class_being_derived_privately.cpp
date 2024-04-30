#include<iostream>
using namespace std;
class base{
int num1;
public:
int num2;
void setdata();
int getnum1();
int getnum2();
};
void base::setdata(){
    num1=3;
    num2=4;
}
int base::getnum1(){
    return num1;
}
int base::getnum2(){
    return num2;
}
class derived:private base{ //class is being derived privately
int num3;
public:
void process();
void display();
};
void derived::process(){
    setdata();
    num3=num2*getnum1();
}
void derived::display(){
    cout<<"value of num1 is "<<getnum1()<<endl;
    cout<<"value of num2 is "<<num2<<endl;
    cout<<"value of num3 is "<<num3<<endl;
}
int main(){
derived der;
//der.setdata() //brings error
der.process();
der.display();
return 0;
}