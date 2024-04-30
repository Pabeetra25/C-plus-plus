#include<iostream>
using namespace std;

int main(){
    //for new keyword
    // float *p = new float(40.78);
    // cout << "The value at address p is " << *(p) << endl;
    //or
    //  int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // cout << "The value of arr[0] is " << arr[0] << endl;
    // cout << "The value of arr[1] is " << arr[1] << endl;
    // cout << "The value of arr[2] is " << arr[2] << endl;
   

   //for delete keyword
   
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;//-->or *(arr+1)==arr[1]
    arr[2] = 30;
    delete[] arr;//to delete array
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}
