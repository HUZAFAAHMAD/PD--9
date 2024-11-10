#include <iostream>
using namespace std;
main() 
{
   
    string find[4];
    

    
   
    for ( int x = 0 ; x < 4 ; x++)
    {
        
        cin >> find[x];
    }
    
    if (find[0] == find[1] && find[0] == find[2] && find[0] == find[3])
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}