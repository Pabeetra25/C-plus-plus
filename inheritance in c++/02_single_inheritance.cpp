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
    num1=45;
    num2=78;
}
int base::getnum1(){
    return num1;
}
int base::getnum2(){
    return num2;
}
class derived:public base{ //class is being derived publicly
int num3;
public:
void process();
void display();
};
void derived::process(){
    num3=num2*getnum1();
}
void derived::display(){
    cout<<"value of num1 is "<<getnum1()<<endl;
    cout<<"value of num2 is "<<num2<<endl;
    cout<<"value of num3 is "<<num3<<endl;
}
int main(){
derived der;
der.setdata();
der.process();
der.display();
return 0;
}