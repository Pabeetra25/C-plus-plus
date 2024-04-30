#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
int main(){
cout<<"The sum of 2 and 3 is "<<sum(2,3)<<endl;
cout<<"The sum of 2 ,4 and 3 is "<<sum(2,4,3)<<endl;
return 0;
}