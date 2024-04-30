#include<iostream>
using namespace std;
// union money
// {
//     int petrol;
//     char house;
//     float pounds;
// };
// int main(){
// union money m;
// m.petrol=160;
// //m.house=12222;-->we can't use other fields of union otherwise we will get garbage value
// cout<<m.petrol;

//enum in c++
int main(){
    enum meal{breakfast,lunch,dinner};
    // meal m1=lunch;
    meal m1=dinner;
    cout<<m1;
return 0;
}