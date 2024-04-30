#include <iostream>
using namespace std;
class employee
{
    static int count;
    int id;

public:
    void setData()
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of the emplyee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount()
    {
        //cout<<id;   //throws an error
        cout << "the value of count is " << count << endl;
    }
};
// count os the static data member of class employee
int employee::count = 2000; // default value is 0
int main()
{
    employee sandy, sachin, sagar;

    // sandy.id=123;
    // sandy.count=1;//can't do this as id and count are private.
    sandy.setData();
    sandy.getData();
    employee::getCount();

    sachin.setData();
    sachin.getData();
    employee::getCount();

    sagar.setData();
    sagar.getData();
    employee::getCount();
    return 0;
}