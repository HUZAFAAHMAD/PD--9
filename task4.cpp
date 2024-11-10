#include <iostream>
using namespace std;
main() 
{
    int numbe;
    cout << "Enter the number of elements :" << endl;
    cin >> numbe;
    int find[numbe];
    bool isfound = false;

    
    cout << "Enter " << numbe << " numbers ,one per line" << endl;
    
    for ( int x = 1 ; x <= numbe ; x++)
    {
        
        cin >> find[x];
    
    
    if (find[x]%10 == 7)
    {
        isfound = true;
    }
    
    }

    if (isfound == true)
    {
        cout << "boom!";
    }
    else
    {
        cout << "There is no 7 in the array";
    }
    }
