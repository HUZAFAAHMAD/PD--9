#include <iostream>
using namespace std;
main()
{
    string element1;
    cout << "Enter the first string :";
    cin >> element1;
    string element2;
    cout << "Enter the second string :";
    cin >> element2;
    int no_of_letters = 0;
    int total = -5;
    for (int i =0 ; element1[i] != '\0' ; i++)
    {
       no_of_letters = no_of_letters +1;
    }
    int no_of_letter = 0;
    for (int p =0 ; element2[p] != '\0' ; p++)
    {
       no_of_letter = no_of_letter +1;
    }
    
    for (int t = 0 ; t < no_of_letters  ; t++)
    {
    
    for (int v = 0 ; v < no_of_letters  ; v++)
    {
    
        
            if (element2[t] == element1[v])
            {
                total = total + 1;
               

            }
    }
}
        
    
    cout << total;
}

