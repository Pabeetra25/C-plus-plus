#include<iostream>
using namespace std;
class Animal{
private:
int age;
public:
int weight;
void setData(int age1);
int getData(){
    cout<<"the age of animal "<<age<<endl;
    cout<<"the weight of animal "<<weight<<endl;
}
};
void Animal::setData(int age1){
    age=age1;
}
int main(){
    Animal dog;
    dog.weight=12;
    dog.setData(3);
    dog.getData();
return 0;
}