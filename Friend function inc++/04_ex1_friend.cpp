#include<iostream>
using namespace std;
class y;
class x{
    int data;
    public:
    void setData(int value){
        data=value;
    }
    friend void add(x,y);
    };
    class y{
         int num;
    public:
    void setData(int value){
        num=value;
    }
    friend void add(x,y);
    };
    void add(x o1,y o2){
        cout<<"Summing data of x and y objects gives "<<o1.data+o2.num<<endl;
    }


int main(){
x a1;
a1.setData(4);
y b1;
b1.setData(7);
add(a1,b1);
return 0;
}