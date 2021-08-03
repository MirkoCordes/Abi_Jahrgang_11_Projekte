// AUFGABE zum Kapitel 10 des Unterrichtsskripts
// *********************************************

/* Die folgende Anweisungsfolge teilt zwei Zahlen durcheinander. Der Fall, dass
   für den Nenner 0 eingegeben wird, führt zu einem Laufzeitfehler und wird mit
   einer if-Abfrage abgefangen. In diesem Fall wird das Programm mit exit(0)
   beeendet (abgebrochen).

   Beachte: Für exit(1) ist die Include-Datei stdlib.h mit einzubinden. */

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
   float zaehler, nenner, bruchwert;
   cout << "Zaehler: ";
   cin >> zaehler;
   cout << "Nenner: ";
   cin >> nenner;
   system("cls");
	
   if(nenner==0) {	//Überprüfung ob Nenner = 0
        cout << "-----Fehler!----- \n\nFalscher Nenner.\n";
       	exit(1);
	}else{ 			//Berechnung der Werte
		bruchwert = zaehler/nenner;
   		cout << "Ergebnis: " << bruchwert;	
	}

   

   cout << endl;  // oder gleichbedeutend: cout << "\n";
   return 0;

/* AUFGABEN:
   a) Erweitere die Anweisungsfolge so, dass die Eingabe von 0 für
   den Nenner abgefangen wird: Ist der Nenner gleich 0, so soll
   eine Fehlermeldung ausgegeben werden, andernfalls soll das korrekte Ergebnis
   ausgegeben werden.

   b) In einem Buchungsprogramm wird der Preis und eine Steuerkennziffer ein-
   gegeben. Es soll immer dann ein Mehrwertsteuersatz von 7% zuge-
   schlagen werden, wenn die angegebene Steuersatzkennziffer 1 ist.
   Andernfalls ist die volle Mehrwertsteuer (19%) auf den Eingabebetrag zu
   berechnen.

   Schreibe für dieses Problem einen Programmablaufplan und ein Struktogramm
   und setze den gefundenen Algorithmus in ein Programm um.

   c) Schreibe ein Programm, das einen Warenwert in Euro einliest und diesen 
   Warenwert in Cent umrechnet und in Cent ausgibt, wenn er kleiner als 1 ist. 
   Andernfalls soll die Ausgabe in Euro erfolgen. 
   Der Dialog könnte wie folgt aussehen:

      Kaufpreis in Euro: _
      Der Kaufpreis beträgt ... Cent 
      bzw.
      Der Kaufpreis beträgt ... Euro
*/
}
