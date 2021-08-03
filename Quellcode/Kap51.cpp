// AUFGABEN zum Kapitel 5 des Unterrichtsskripts
// *********************************************
#include <iostream>
#include <conio.h>  	// für getch()
using namespace std;

int main()
{
   unsigned short int a,b;   // Die Zeilen 6,7 und 8 können auch durch folgende Zeile
   unsigned int d;
   int c = 10;
   a=3;               // ersetzt werden:   short int a=3, b=32764, c;
   b=32765;           // Mit dieser Anweisung werden die Variablen nicht nur
   d = c * (a + b);		          // definiert, sondern a und b zugleich auch initialisiert.
   cout << "Die Summe der beiden Zahlen beträgt ";
   cout << d;
   getch();  // Programm wartet auf die Eingabe eines beliebigen Zeichens

/* ERLÄUTERUNGEN:
   Zeile 6 deklariert drei Variablen namens a,b und c.
   Das heißt: Es wird im Arbeitsspeicher jeweils Speicherplatz für eine
   Zahl im Wertebereich von -32768 bis +32767 reserviert.
   Im weiteren Programmablauf kann ein reservierter Speicherplatz unter
   seinem Variablennamen angesprochen werden: Es können ihm Werte
   zugewiesen (Zeilen 10 und 11) und sein Speicherinhalt kann ausgelesen
   werden (Zeile 15).

   AUFGABEN:
   a) Führe das Programm aus und überprüfe die Richtigkeit	des Ergebnisses. 
   Ändere dann die Wertzuweisung:  b=32765
   Teste, ob die Summe noch korrekt berechnet wird. Wie kann der Fehler
   behoben werden? Beachte die Tabelle von Kapitel 5 im Unterrichtsskript!

   b) Ändere das obige Programm dahingehend ab, daß c mit 10 vorinitialisiert 
   wird, die Summe von a und b mit c multipliziert wird, das Ergebnis dann 
   einer (natürlich noch zu definierenden) Variablen d zugewiesen wird und d 
   schließlich ausgegeben wird.

   c) Schreibe das Programm von b) so um, daß auch Dezimalzahlen (also Komma-
   zahlen) verarbeitet werden können. Welche Datentypen kommen in Frage?
   Teste das Programm mit Dezimalzahlen, z.B. mit b=1.23456 und c=10.5!

   (d) Sorge dafür, dass d mit einer Genauigkeit von 1 Stelle hinter dem
   Komma angezeigt wird!
*/
  return 0;
}
