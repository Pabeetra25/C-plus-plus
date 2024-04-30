#include<iostream>
using namespace std;
class base1{
int data1;
public:
base1(int i){
    data1=i;
    cout<<"BAse1 class constructor is called:"<<endl;
}
void print_database1(){
    cout<<"The value of data1 is "<<data1<<endl;
}
};
class base2{
int data2;
public:
base2(int i){
    data2=i;
    cout<<"Base2 class constructor is called:"<<endl;
}
void print_database2(){
    cout<<"The value of data1 is "<<data2<<endl;
}
};
class derived:public base2,public base1{
int derived1,derived2;
public:
derived(int a,int b,int c,int d):base2(b),base1(a){
    derived1=c;
    derived2=d;
    cout<<"Derived class constructor is called "<<endl;
}
void print_derived(){
    cout<<"The value of derived1 is "<<derived1<<endl;
     cout<<"The value of derived2 is "<<derived2<<endl;

}
};
int main(){
derived deep(1,2,3,4);
deep.print_database1();
deep.print_database2();
deep.print_derived();
return 0;
}