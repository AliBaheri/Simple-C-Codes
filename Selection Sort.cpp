#include <iostream>

using namespace std;

int main()
{
   int array[100], n, i, d, position, swap;

   cout << "Enter number of elements\n";
   cin >> n;



   for ( i = 0 ; i < n ; i++ )
     cin >> array[i];

   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      position = i;

      for ( d = i + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }

         swap = array[i];
         array[i] = array[position];
         array[position] = swap;

   }

   cout << "Sorted list:\n";

   for ( i = 0 ; i < n ; i++ )
      cout << " " << array[i];

   return 0;
}
