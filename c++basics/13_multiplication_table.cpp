#include<iostream>
using namespace std;
int main(){
    int n=6;
    cout<<"Multiplication table of 6 is listed as:"<<endl;
    for(int i=0;i<10;i++){
        cout<<n<<"x"<<i+1<<"="<<n*(i+1)<<endl;
    }
    return 0;
}