#include<iostream>
using namespace std;
class student{
protected:
int roll_number;
public:
void set_roll_number(int);
void get_roll_number();
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student::get_roll_number(){
    cout<<"Your roll number is "<<roll_number<<endl;
}
class exam:public student{
protected:
float maths;
float science;
public:
void set_marks(float ,float);
void get_marks();
};
void exam::set_marks(float m,float s){
    maths=m;
    science=s;
}
void exam::get_marks(){
    cout<<"your marks in maths is "<<maths<<endl;
    cout<<"your marks in science is "<<science<<endl;
}
class result:public exam{
float precentage;
public:
void display_result(){
    get_roll_number();
    get_marks();
    cout<<"You got the percentage with "<<(maths+science)/2<<"%"<<endl;
    
}
};
int main(){
result sandy;
sandy.set_roll_number(106);
sandy.set_marks(87.3,89.8);
sandy.display_result();
return 0;
}