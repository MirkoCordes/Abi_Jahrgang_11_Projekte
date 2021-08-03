/* if ... else ... ----------------------------------------------------------

 INFO: Ein Jahr ist kein Schaltjahr, wenn die Jahreszahl nicht durch 4
 teilbar ist. Ein Jahr ist ein Schaltjahr, wenn die Jahreszahl durch 4,
 nicht aber durch 100 teilbar ist. Ein Jahr ist ebenfalls ein Schalt-
 jahr, wenn die Jahreszahl durch 4, durch 100 und durch 400 teilbar ist.

		Also hier die Verständniskontrolle:
		1996		Schaltjahr ja
		1997		Schaltjahr nein
		1900		Schaltjahr nein
		2000		Schaltjahr ja


 AUFGABE: Vervollständige die Ausgaben!
---------------------------------------------------------------------------*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   unsigned short int jahr;
   cout << "Jahr: ";
   cin >> jahr;

   if ( jahr%4 == 0  &&  (jahr%100 != 0 || jahr%400 == 0)  )
      cout << "Schaltjahr" << endl;
   else  
      cout << "kein Schaltjahr" << endl;

	getch();
   return 0;
}
