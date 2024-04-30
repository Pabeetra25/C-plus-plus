#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
// Test(int i, int j) : b(j), a(i+b)//->compiler will throws an error as a is being
//initialized first,so we need to assign the value to a data membe first

    Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(a + j)-->is also right
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
