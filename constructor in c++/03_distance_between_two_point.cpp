#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x,y;
    public:
    //below line is constructor which is defined
    point(int a,int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
    friend double distance(point,point);
};
double  distance (point p1, point p2){
double res=sqrt(pow(p1.x-p2.x,2)+
pow(p1.y-p2.y, 2));
return res; }
int main(){
point p(1,3);
p.displayPoint();
point q(4,7);
q.displayPoint();
double result= distance (p,q);
cout<<"The distance between two points is " <<result<<endl;

return 0;
}