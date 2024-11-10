#include <iostream>
using namespace std;
main() 
{
    string word;
    cout << "Enter the string :";
    cin >> word;
    int no_of_letters = 0;
    for (int i =0 ; word[i] != '\0' ; i++)
    {
       no_of_letters = no_of_letters +1;
    }
    if (no_of_letters % 2 == 0)
    {
        cout << "True";
    }
    else{
        cout << "False";
    }

}