/* if ... else ... ----------------------------------------------------------

 INFO: Ein Jahr ist kein Schaltjahr, wenn die Jahreszahl nicht durch 4
 teilbar ist. Ein Jahr ist ein Schaltjahr, wenn die Jahreszahl durch 4,
 nicht aber durch 100 teilbar ist. Ein Jahr ist ebenfalls ein Schalt-
 jahr, wenn die Jahreszahl durch 4, durch 100 und durch 400 teilbar ist.

		Also hier die Verständniskontrolle:
		1996		Schaltjahr ja oder nein?
		1997		Schaltjahr ja oder nein?
		1900		Schaltjahr ja oder nein?
		2000		Schaltjahr ja oder nein?

 AUFGABE:
 Das folgende Programm weist leider noch Fehler auf!
 Lokalisiere und behebe die Fehler durch "Erweitern" des Quellcodes!
---------------------------------------------------------------------------*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   unsigned short int jahr;
   cout << "Jahr: ";
   cin >> jahr;

   if (jahr%400 != 0) { //  nicht durch 400 teilbar
      if (jahr%100 == 0)
         cout << "Kein Schaltjahr!" << endl;
      else if (jahr%4 == 0)
         cout << "Schaltjahr!" << endl;
    	else {
    	cout << "Kein Schaltjahr!" << endl;
		}
   } 
   else if (jahr%4 == 0){
   	if (jahr%100 == 0){
   		cout << "Schaltjahr!" << endl;
	   } else {
	   	cout << "Kein Schaltjahr!" << endl;
	   } 
   }
   else  
      cout << "Schaltjahr!" << endl;

   getch();
   return 0;
}
