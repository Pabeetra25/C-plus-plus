#include<iostream>
using namespace std;
class sample{
    int data1;
    int data2;
    int data3;
    public:
    sample(int a,int b=8,int c=9){
        data1=a;
        data2=b;
        data3=c;
    }
    void printData();
};
void sample::printData(){
    cout<<"the value of data1,data2 and data3 are "<<data1<<","<<data2<<" and "<<data3<<endl;
}
int main(){
sample s(1);
s.printData();
return 0;
}