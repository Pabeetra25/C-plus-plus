#include<iostream>
using namespace std;
class bankDeposit{
int principal;
int years;
float rate;
float returnValue;
public:
bankDeposit(){}
bankDeposit(int p,int y,float r);
bankDeposit(int p,int y,int r);
void show();
};
bankDeposit::bankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    rate=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+rate);
    }
}
bankDeposit::bankDeposit(int p,int y,int r){
     principal=p;
    years=y;
    rate=float(r)/100;
    returnValue=principal;
     for(int i=0;i<y;i++){
        returnValue=returnValue*(1+rate);
    }
}
void bankDeposit::show(){
    cout<<"Principal amount was "<<principal<<" and"<<" return value after "<<years<<" years is "<<returnValue<<endl;

}
int main(){
bankDeposit bd1,bd2,bd3;
int p,y;
float r;
int R;
cout<<"Enter the valu of principal ,years and rate"<<endl;
cin>>p>>y>>r;
bd1=bankDeposit(p,y,r);
bd1.show();
cout<<"Enter the value of principal ,years and rate"<<endl;
cin>>p>>y>>R;
bd2=bankDeposit(p,y,R);
bd2.show();
return 0;
}