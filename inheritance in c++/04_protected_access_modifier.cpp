#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    int b;

};

class derived:protected base{

};
int main(){
    base b;
derived d;
//cout<<d.a; // won't work a is protected both in base and derived class
return 0;
}