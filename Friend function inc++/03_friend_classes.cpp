#include<iostream>
using namespace std;
//forward declaration
class complex;
class calculator{
    public:
    int sum(int a,int b){
        return(a+b);
    }
   int sumRealComplex(complex ,complex );
   int sumCompComplex(complex ,complex );
};
class complex{
    int a,b;
    //individually declaring functions as friends
    // friend int calculator::sumRealComplex(complex ,complex );
    // friend int calculator::sumCompComplex(complex ,complex );
    
    //Aliter:Declaring  the entire  calculator class as friends
    friend class calculator;
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
    };

     int calculator:: sumRealComplex(complex o1,complex o2){
        return(o1.a+o2.a);
    }
    int calculator:: sumCompComplex(complex o1,complex o2){
        return(o1.b+o2.b);
    }
int main(){
complex o1,o2;
o1.setNumber(6,5);
o1.printNumber();
o2.setNumber(7,2);
o2.printNumber();
calculator calc;
int result=calc.sumRealComplex(o1,o2);
cout<<"The sum of real part of o1 and o2 is "<<result<<endl;
int res=calc.sumCompComplex(o1,o2);
cout<<"The sum of complex part of o1 and o2 is "<<res<<"i"<<endl;

return 0;
}