#include <iostream>
using namespace std;
main()
{
   const int max_lenght = 100;
   char str[max_lenght];
   cout << "Enter a  string :";
   cin.getline(str,max_lenght );
   float L;
   int total_letters =0;
   for (int x =0 ; str[x] != '\0' ; x++)
   {
        total_letters = total_letters +1;
   }
   cout << total_letters << endl;
   L = (total_letters*2) + (total_letters-1 * 2);
   cout << L;

}