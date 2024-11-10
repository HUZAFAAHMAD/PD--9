#include <iostream>
using namespace std;
main() 
{
    string movies[5] = {"Venom" ,"Venom2","thenun","Gladiator","Terminator"};
    int price = 500;
    int x;
    int discount;
    
    cout << "Enter the movie name :";
    cin >> movies[x];
    
    if (movies[x] == movies[0] || movies[x] == movies[2] || movies[x] == movies[4])
    {
        discount =price * 0.95;
    }
    else
    {
        discount = price * 0.90;
    }
      cout << "Price after discount is :" << discount << endl;
}
