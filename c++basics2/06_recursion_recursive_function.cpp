#include<iostream>
using namespace std;
int factorial(int n);
int main(){
int num;
cout<<"Enter the desired number: "<<endl;
cin>>num;
factorial(num);
cout<<"so the factorial of  "<< num<<" is  "<<  factorial(num)<<endl;
return 0;
}
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}