#include <iostream>
using namespace std;
class shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};
void shop::setPrice()
{
    cout << "Enter Id of your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop thamel;
    thamel.initCounter();
    thamel.setPrice();
    thamel.setPrice();
    thamel.setPrice();
    thamel.displayPrice();
    return 0;
}