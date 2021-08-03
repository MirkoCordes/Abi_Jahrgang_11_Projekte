/* AUFGABE 1 zum Thema "switch-Anweisung"

   Es soll ein Programm DATUM.CPP geschrieben werden, das per Tastatur den
   Tag, den Monat (numerisch) sowie das Jahr einliest und sodann ähnlich wie im
   folgenden beispielhaften Bildschirmdialog ausgibt (Tastatureingaben stehen
   in Klammern):

				Tag:   (1)
				Monat: (5)
				Jahr:  (2018)
				Heute haben wir den 1. Mai 2018

   Beachte: Die Auswertung des Monats soll mit einer switch-Anweisung erfolgen.
   Eine fehlerhafte Eingabe des Tages bzw. Monats soll unberücksichtigt bleiben.
   
   Vertiefende Aufgabe zu switch: RABATT.CPP
*/

#include <iostream>
using namespace std;
unsigned short day, month, year;
string mon;


int main()
{
cout << "Tag: ";
cin >> day;
cout << "Monat: ";
cin >> month;
cout << "Jahr: ";
cin >> year;

switch (month) {
	case 1: mon = "Januar"; break;
	case 2: mon = "Februar"; break;
	case 3: mon = "März"; break;
	case 4: mon = "April"; break;
	case 5: mon = "Mai"; break;
	case 6: mon = "Juni"; break;
	case 7: mon = "Juli"; break;
	case 8: mon = "August"; break;
	case 9: mon = "September"; break;
	case 10: mon = "Oktober"; break;
	case 11: mon = "Novermber"; break;
	case 12: mon = "Dezember"; break;
};

cout << "Heute haben wir den " << day << ". " << mon << " year."; 

   return 0;
}
