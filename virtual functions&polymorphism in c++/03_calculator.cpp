#include<iostream>
#include<cmath>
using namespace std;
class simpleCalculator{
int a,b;
public:
void get_dataSimple(){
    cout<<"enter value of a "<<endl;
    cin>>a;
     cout<<"enter value of b "<<endl;
    cin>>b;
}
void performOperation(){
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
}
};
class scientificCalculator{
int a,b;
public:
void get_datacientific(){
    cout<<"enter value of a "<<endl;
    cin>>a;
     cout<<"enter value of b "<<endl;
    cin>>b;
}
void performOperationScientific(){
    cout<<"the value of cos(a) is "<< cos(a)<<endl;
    cout<<"the value of sin(a) is "<<sin(a)<<endl;
    cout<<"the value of exp(a) is "<<exp(a)<<endl;
    cout<<"the value of tan(a) is "<<tan(a)<<endl;
}
};
class HybridCalculator:public simpleCalculator,public scientificCalculator{

};
int main(){
HybridCalculator Hc;

Hc.get_dataSimple();
Hc.performOperation();
Hc.get_datacientific();
Hc.performOperationScientific();
return 0;
}