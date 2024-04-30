#include<iostream>
using namespace std;
class b{
    public:
    void say(){
        cout<<"this crazy world:"<<endl;
    }
};
class D:public b{
    int a;
    //D's new say()method will override base class's say() method:
    public:
    void say(){
        cout<<"it is going to be very difficult for human to live in this earth"<<endl;
    }
};
int main(){
b b;
b.say();
D d;
d.say();
return 0;
}