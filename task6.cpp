#include <iostream>
using namespace std;
main() 
{
    int numbe;
    cout << "Enter the number of elements :" << endl;
    cin >> numbe;
    int find[numbe];
    int times;
    
    cout << "Enter number of times :" << endl;
    cin >> times;
    

    
    cout << "Enter " << numbe << " numbers ,one per line" << endl;
    
    
    for ( int x = 1 ; x <= numbe ; x++)
    {
        
        cin >> find[x];
    }
        
    for ( int x = 1 ; x <= numbe ; x++)
    { 
    if (find[x] % 2 == 0)
    {
        for (int i = 1 ; i <= numbe ;i++)
        {
           find[x] = find[x] - 2; 
            
        
        }
        
        
    }
     if (find[x] % 2 == 1)
    {
       for (int p = 1 ; p <= times ; p++)
        {
           find[x] = find[x] + 2; 
        
        }
        
        
        
    }
    cout  << find[x] << ",";
    }
    
}
     
    
