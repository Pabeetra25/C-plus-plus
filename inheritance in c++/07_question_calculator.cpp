#include<iostream>
#include <cmath>
using namespace std;
class simpleCalculator{
    protected:
    int a, b, c;

public:
    int addition(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a + b;
        return c;
    }
    int subtraction(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a - b;
        return c;
    }
    int multiplication(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a * b;
        return c;
    }
    int division(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a / b;
        return c;
    }
};
class scientificCalculator{
protected:
    int a, b, h;

public:
    int square()
    {
        cout << "Enter number to find sqaure" << endl;
        cin >> a;
        h = pow(a, 2);
        return h;
    }
    int cube()
    {
        cout << "Enter number to find the cube of same" << endl;
        cin >> b;
        h = pow(b, 3);
        return h;
    }
};
class hybridCalculator:public simpleCalculator,public scientificCalculator{
public:
    void display1(void)
    {
        cout << "Value of calculation is " << c << endl;
    }
    void display2(void)
    {
        cout << "value of calculation is " << h << endl;
    }
};
int main(){
 int choice, m;
    hybridCalculator hC;
    cout << "To add two numbers press 1" << endl;
    cout << "To subtract two numbers press 2" << endl;
    cout << "To multiply two numbers press 3" << endl;
    cout << "To divide two numbers press 4" << endl;
    cout << "To find square of number press 5" << endl;
    cout << "To find cube of number press 6" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        m = hC.addition();
        cout << "Answer is " << m << endl;
        hC.display1(); // redundant but wanted use all classes
        break;
    case 2:
        m = hC.subtraction();
        cout << "Answer is " << m;
        hC.display1();
        break;
    case 3:
        m = hC.multiplication();
        cout << "Answer is " << m;
        hC.display1();
        break;
    case 4:
        m = hC.division();
        cout << "Answer is " << m;
       hC.display1();
        break;
    case 5:
        m = hC.square();
        cout << "Answer is " << m;
       hC.display2();
        break;
    case 6:
        m =hC.cube();
        cout << "Answer is " << m;
        hC.display2();
        break;
    default:
        cout << "Incorrect choice" << endl;
        break;
    }
    return 0;
}
   