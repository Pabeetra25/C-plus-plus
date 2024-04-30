#include<iostream>
using namespace std;
class Student{
protected:
int roll_number;
public:
void set_number(int a){
    roll_number=a;
}
void print_number(){
    cout<<"Your roll number is "<<roll_number<<endl;
}
};
class Test:public virtual Student{
protected:
float maths,science;
public:
void set_marks(float m,float s){
    maths=m;
    science=s;
}
void print_marks(){
    cout<<"Your result is here: "<<endl
        <<"maths: "<<maths<<endl
        <<"science: "<<science<<endl;

}
};
class Sports:public virtual Student{
protected:
float score;
public:
void set_score(float sc){
    score=sc;
}
void print_score(){
    cout<<"Your pt score is "<<score<<endl;
}
};
class Result:public Test,public Sports{
private:
float total;
public:
void display(){
    total=maths+science+score;
    print_number();
    print_marks();
    print_score();
    cout<<"Your total score is "<<total<<endl;
}
};
int main(){
Result sandy;
sandy.set_number(1233);
sandy.set_marks(78.9,88.6);
sandy.set_score(9);
sandy.display();
return 0;
}