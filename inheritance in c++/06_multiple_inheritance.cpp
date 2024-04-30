#include<iostream>
using namespace std;
class base1{
protected:
int base1int;
public:
void set_base1int(int a){
    base1int=a;
}
};
class base2{
protected:
int base2int;
public:
void set_base2int(int a){
    base2int=a;
}
};
class derived:public base1,public base2{
public:
void show(){
    cout<<"The value of base1int is "<<base1int<<endl;
    cout<<"The value of base2int is "<<base2int<<endl;
     cout<<"The sum of these values  is "<<base1int+base2int<<endl;

}
};
/*the inherited derived class will look like:
datamember:
base1int-->protected
base2int-->protected
member function-->
set_base1int()-->public
set_base2int()-->public
show-->public
*/
int main(){
derived john;
john.set_base1int(23);
john.set_base2int(12);
john.show();
return 0;
}