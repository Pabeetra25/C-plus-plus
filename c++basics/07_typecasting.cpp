#include <iostream>
using namespace std;
int main()
{
    int x = 37;
    float y = 67.44;
    cout << "the value of x is: " << float(x) << endl;
    cout << "the value of x is: " << (float)x << endl;
    cout << "the value of y is: " << int(y) << endl;
    cout << "the value of y is: " << (int)y << endl;

    cout << "The Expression is:" << x + y << endl;
    cout << "The Expression is:" << x + int(y) << endl;
    return 0;
}