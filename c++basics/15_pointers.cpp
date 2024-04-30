//pointers stores the aaddress of another variable
#include<iostream>
using namespace std;

int main(){
int a=8;
int *b=&a;
// &-->address operator
cout<<"the address of a is:"<<&a<<endl;
cout<<"the address of a is:"<<b<<endl;

// *-->(value at)dereference operator
cout<<"The value at address b is:"<<*b<<endl;
// pointer to pointer
int **c=&b;
cout<<"the address of b is:"<<&b<<endl;
cout<<"the address of b is:"<<c<<endl;
cout<<"the value at  address c is:"<<*b<<endl;
cout<<"the value at address value_at(value_at(c)) is:"<<**c<<endl;
return 0;
}