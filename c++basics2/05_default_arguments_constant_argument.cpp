#include<iostream>
using namespace std;
float moneyReceived(int currentMoney,float factor=1.04 ){
    return currentMoney*factor;
}
int main(){
    int money=100000;
cout<<"If you  have "<<money<<"Rs in your bank aacount,you will receive Rs"<<moneyReceived(money)<<"  after one year"<<endl;
cout<<"For VIP:If you  have "<<money<<"Rs in your bank aacount,you will receive Rs"<<moneyReceived(money,1.1)<<"  after one year"<<endl;
return 0;
}
//constant arguments
//int strlen(const int *p){

//}