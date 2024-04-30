#include<iostream>
using namespace std;
int sum(int a,int b);//-->function prototype
void greet();
int main(){
int num1,num2;
//num1 and num2 are actual parameters
cout<<"Enter first number"<<endl;
cin>>num1;
cout<<"Enter second number"<<endl;
cin>>num2;

cout<<"the sum is :"<<sum(num1,num2)<<endl;
greet();  //calling function

return 0;
}
int sum(int a,int b){
    //formal parameters a and b will be taking values from
    //actual parameters num1 and num2
    int c=a+b;
    return c;
}
void greet(){
    cout<<"Hello World,Good Morning!from the top of Himalayas";
}