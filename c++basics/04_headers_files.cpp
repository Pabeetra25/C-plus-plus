//There are two types of headers files
//1.system header file:it comes with the compiler
#include<iostream>
//2.user defined header file:it is created by the programmer
// #include"file.h"-->this will produce an error if file.h is not in the current directory
using namespace std;
int main(){
    cout<<"Hello World";
    return 0;
}