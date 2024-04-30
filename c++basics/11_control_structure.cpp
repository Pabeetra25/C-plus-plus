#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    //selection structure:if-else if_else case

    // if(age<18){
    //     cout<<"Sorry,You can't vote in election."<<endl;
    // }
    // else if(age==18){
    //     cout<<"You can vote but your voter's card should be there"<<endl;
    // }
    // else{
    //     cout<<"Obviously,you are going to vote for election"<<endl;
    // }


    //selection structure:switch case

  switch (age)
  {
  case 18:
      cout<<"you can go to party."<<endl;
      break;
      case 12:
      cout<<"you are not allowed to go to party"<<endl;
      break;
      case 7:
      cout<<"you are still kid to go to party at night"<<endl;
      break;
  default:
       cout<<"No special cases."<<endl;
      break;
  }
  cout<<"Done with this switch case.!!"<<endl;
    return 0;
}