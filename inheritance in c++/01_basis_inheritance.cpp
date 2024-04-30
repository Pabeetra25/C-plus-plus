#include <iostream>
using namespace std;
// base class
class employee
{
public:
    int id;
    float salary;
    employee() {}
    employee(int inpId)
    {
        id = inpId;
        salary = 98;
    }
};
/* Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
   class members/methods/etc...
};  */

 /*Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited */
class programmer : public employee
{
public:
int languageCode;
    programmer(int inpId)
    {
        id = inpId;
         languageCode = 8;
    }
   
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    employee sam(1), sandy(2);
    cout << sam.salary << endl;
    cout << sandy.salary << endl;
    programmer jang(11);
    cout << jang.languageCode << endl;
    cout<<jang.id<<endl;
    jang.getData();
    return 0;
}