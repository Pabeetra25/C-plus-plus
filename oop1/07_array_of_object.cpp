#include<iostream>
using namespace std;
class employee{
int id;
int salary;
public:
void setId(){
    salary=90000;
    cout<<"Enter your Id of employee"<<endl;
    cin>>id;
}
void getId(){
    cout<<"The Id of the employee is "<<id<<endl;
}
};
int main(){
    employee fb[5];
    for(int i=0;i<5;i++){
        fb[i].setId();
        fb[i].getId();
    }

return 0;
}