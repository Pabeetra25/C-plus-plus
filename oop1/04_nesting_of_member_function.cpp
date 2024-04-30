#include<iostream>
#include<string>
using namespace std;
class binary{
    private:
    string s;
     void check_bin(void);
    public:
    void read();
   
    void ones_complement(void);
    void display();
};
void binary::read(){
    cout<<"enter the binary number"<<endl;
    cin>>s;
}
void binary:: check_bin(void){
 for (int i = 0; i < s.length(); i++)
 {
     if(s.at(i)!='0' && s.at(i)!='1'){
         cout<<"Incorrect binary format"<<endl;
         exit(0);
     }
 }
 
}
void binary::ones_complement(void){
    check_bin();//nesting of member function
    for (int i = 0; i < s.length(); i++)
 {
     if(s.at(i)=='0')
     {
        s.at(i)='1'; 
     }
     else{
         s.at(i)='0';
     }
 }
}
void binary::display(){
    cout<<"Displaying your binary number"<<endl;
   for (int i = 0; i < s.length(); i++)
 {
    cout<<s.at(i);
     }
     cout<<endl;
 }
int main(){
binary b;
b.read();
//b.check_bin();
b.display();
b.ones_complement();
b.display();
return 0;
}