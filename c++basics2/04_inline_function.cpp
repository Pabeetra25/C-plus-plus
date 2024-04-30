#include<iostream>
using namespace std;
  inline int product(int a,int b){
      //inline is not recommended when static variables r being used
//       static int c=0;//thos executes only once
//       c=c+1;  //next time this function is run,the value of c will be retained

//  return a*b+c;
return a*b;
}
int main(){
int a,b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"product of a and b is :"<<product(a,b)<<endl;
cout<<"product of a and b is :"<<product(a,b)<<endl;
cout<<"product of a and b is :"<<product(a,b)<<endl;
cout<<"product of a and b is :"<<product(a,b)<<endl;


return 0;
}