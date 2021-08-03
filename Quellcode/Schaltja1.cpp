/* if ... else ... ----------------------------------------------------------
 AUFGABE:
 Schreiben Sie ein Programm, das eine Jahreszahl einliest und prüft, ob das
 betreffende Jahr ein Schaltjahr ist.

 INFO: Ein Jahr ist kein Schaltjahr, wenn die Jahreszahl nicht durch 4
 teilbar ist. 
 
 Ein Jahr ist ein Schaltjahr, wenn die Jahreszahl durch 4,
 nicht aber durch 100 teilbar ist. 
 
 Ein Jahr ist ebenfalls ein Schaltjahr, wenn die Jahreszahl durch 4, 
 durch 100 und durch 400 teilbar ist.

		Also hier die Verständniskontrolle:
		1996		Schaltjahr ja
		1997		Schaltjahr nein
		1900		Schaltjahr nein 
		2000		Schaltjahr ja 
---------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
   unsigned int jahr;  // nur mit dem Datentyp int funktioniert Modulo
   
   cout << "Geben sie das Jahr an: ";
   cin >> jahr;
   
   if (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0){
	cout << jahr << " ist ein Schaltjahr!";
   } else if (jahr % 4 == 0 && jahr % 100 != 0){
   	cout << jahr << " ist ein Schaltjahr";
   } else {
   	cout << jahr << " ist kein Schaltjahr";
   }
   
   return 0;
}
