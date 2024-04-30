#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        //this is a keyword which is a pointer which points the object
        //which invokes the member function
        this->a = a;
    }
        void getData()
        {
            cout << "the value of a is :" << a << endl;
        }
    
};
int main()
{
    A a;
    a.setData(45);
    a.getData();
    return 0;
}