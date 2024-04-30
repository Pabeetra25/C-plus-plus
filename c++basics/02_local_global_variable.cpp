#include<iostream>
using namespace std;
int glo=78;
void sum(){
    int a;
     cout<<glo;
}
int main(){
    int glo=98;
    glo=55;
sum();
cout<<glo;
return 0;
}