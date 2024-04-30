#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);//declaration
    void getData()
    {
        cout << "The value of a is " << a<<endl;
        cout << "The value of b is " << b<<endl;
        cout << "The value of c is " << c<<endl;
        cout << "The value of d is " << d<<endl;
        cout << "The value of e is " << e<<endl;
    }
};
void Employee::setData(int a1, int b1, int c1){
a=a1;
b=b1;
c=c1;
}
int  main()
{
Employee vicky;
//vicky.a=87;//will throw an error as a is private
vicky.d=4;
vicky.e=9;
vicky.setData(2,1,6);
vicky.getData();
    return 0;
}