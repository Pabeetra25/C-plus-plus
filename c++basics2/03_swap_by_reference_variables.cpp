#include<iostream>
using namespace std; 
void swapRefrence(int &a,int &b);
int main(){
int x=4,y=8;
cout<<"value of x is "<<x<<endl;
cout<<"value of y is "<<y<<endl;
swapRefrence(x,y);
cout<<"value of x after swap is "<<x<<endl;
cout<<"value of y after swap is "<<y<<endl;

return 0;
}
void swapRefrence(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    
}