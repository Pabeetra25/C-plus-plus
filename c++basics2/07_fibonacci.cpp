#include<iostream>
using namespace std;
int fib(int n);
int main(){
int num;
cout<<"Enter the number you want "<<endl;
cin>>num;
cout<<"the term in fibonacci sequence at position "<<num<<" is "<<fib(num)<<endl;
return 0;
}
int fib(int n){
    if(n<2){
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}