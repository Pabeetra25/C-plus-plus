#include<iostream>
using namespace std;
//for cylinder
   int volume(double radius,int height){
       return(3.14*radius*radius*height);
   }
   //for rectangle
   int volume(int l,int b,int h){
       return(l*b*h);
   }
   //for cube
   int volume(int side){
       return(side*side*side);
   }
int main(){
    cout<<"The volume of cylinder of radius 2 and height 5 is "<<volume(2, 5)<<endl;
    cout<<"The volume of rectangle of 3, 3 and 6 is "<<volume(3, 3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
   
   
   
   
    return 0;
}
