/* Fkt_MAX.CPP
   Das untenstehende Programmgerüst ist so zu vervollständigen, dass die 
   Funktion "max" die größere zweier von der main-Funktion übergebener Zahlen 
   ermittelt und an die main-Funktion zwecks Ausgabe zurückgibt. 
   a) Der Fall, dass in main zwei gleiche Zahlen eingegeben werden, soll 
      zunächst unberücksichtigt bleiben.
   b) Ändere das Programm dahingehend ab, dass auch dann ein sinnvoller 
      Programmablauf erfolgt, wenn beide Zahlen gleich groß sind.
      In diesem Fall soll ausgegeben werden: Beide Zahlen sind gleich groß!
*/

#include <iostream>
#include <conio.h>
using namespace std;

int max (int x, int y)
{
   if (x>y){
   	return x;
   } else if (x == y){
   	return -1;
   }else {
   	return y;
   }
}

int main() {
   int x, y, ergebnis;

   cout << "ZAHLENVERGLEICH\n";
   cout << "Erste Zahl:  ";
   cin >> x;
   cout << "Zweite Zahl: ";
   cin >> y;

   ergebnis = max(x, y);
        if (ergebnis == -1){
        	cout << "Beide Zahlen sind gleich groß.";
		} else {
		cout << "Die groessere der beiden Zahlen ist die Zahl "
        << ergebnis;	// Funktionsaufruf	
		}

   getch();
   return 0;
}

