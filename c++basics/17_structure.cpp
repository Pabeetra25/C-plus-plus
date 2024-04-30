#include<iostream>
using namespace std;
// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

// int main(){
//     struct employee e1;
//     e1.eId=123;
//     e1.favChar='s';
//     e1.salary=4555;
//     cout<<"employee's id is "<<e1.eId<<endl;
//      cout<<"employee's favourite character is "<<e1.favChar<<endl;
//      cout<<"employee's salary is "<<e1.salary<<endl;

//using typedef
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

int main(){
   ep e1;
    e1.eId=123;
    e1.favChar='s';
    e1.salary=4555;
    cout<<"employee's id is "<<e1.eId<<endl;
     cout<<"employee's favourite character is "<<e1.favChar<<endl;
     cout<<"employee's salary is "<<e1.salary<<endl;



return 0;
}