#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"peach","apple","guava","watermelon",};
    int price[4] = {60,70,40,30};
    string name;
    cout << "Enter the name of the fruit :";
    cin >> name;
    int quantity;
    cout << "Enter quantity of the fruit(in kgs) :";
    cin >> quantity;
    int totalprice;
    if (name == fruit[0])
    {
        totalprice = 60*quantity;
    }
    if (name == fruit[1])
    {
        totalprice = 70*quantity;
    }
    if (name == fruit[2])
    {
        totalprice = 40*quantity;
    }
    if (name == fruit[3])
    {
        totalprice = 30*quantity;
    }
    cout << "Your total bill is :" << totalprice ;


}