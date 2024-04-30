#include<iostream>
using namespace std;

int main(){
int marks[]={45,56,63,73,23};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
marks[3]=66; //can change the value of an array
cout<<marks[3]<<endl;
cout<<marks[4]<<endl;
//using loops
for (int i = 0; i <5; i++)
{
   cout<<"The value of marks"<<i<<"  is "<<marks[i]<<endl;
}
//pointers and arrays
int *p=marks;
cout<<"the value of *p is"<<*p<<endl;
cout<<"the value of *(p+1) is "<< *(p+1)<<endl;
cout<<"the value of *(p+2) is "<< *(p+2)<<endl;
cout<<"the value of *(p+3) is "<< *(p+3)<<endl;
cout<<"the value of *(p+4) is "<< *(p+4)<<endl;
return 0;
}