#include<iostream>
using namespace std;
class complex{
int real,imaginary;
public:
void setData(int r,int i){
    real=r;
    imaginary=i;

}
void getData(){
    cout<<"the value of real parts "<<real<<endl;
    cout<<"the value of imiginary part is "<<imaginary<<"i"<<endl;
}
};
int main(){
complex *ptr=new complex;
(*ptr).setData(2,56);
(*ptr).getData();
return 0;
}