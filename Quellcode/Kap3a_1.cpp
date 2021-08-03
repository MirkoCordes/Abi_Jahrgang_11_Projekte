// AUFGABEN zum Kapitel 3a des Unterrichtsskripts
// **********************************************
#include <iostream> // f�r cout
#include <conio.h>  // f�r getch()
using namespace std; 

int main() {    // Hauptfunktion des Programms, wird bei Programmstart zuerst
                // abgearbeitet

   cout << "Hallo!";        // die Anweisung cout leitet den Text in Hoch-
                            // kommata �ber einen sog. Ausgabedatenstrom
                            // auf das Standardausgabeger�t

   getch();  // DevC++-IDE: Programm wartet auf beliebigen Tastendruck,
             // im Sinne von "get character" (empfange ein Zeichen)

   return 0;  // Programm wird beendet

/* Aufgaben:
   a) Erweitere die Ausgabe um zus�tzliche Zeilen.
      Dazu ist ist das Steuerzeichen n f�r newline mit einem vorangestellten
      \ (=Backslash) in den Ausgabestring einzuf�gen.
      Der Backslash teilt dem Compiler mit, dass ein Steuerzeichen folgt.
      
   b) Erzeuge ein neues Programm "Tabelle.cpp" mit einer tabellenartigen Ausgabe 
      durch Verwendung des Steuerzeichens t (=Tabulator). 
      Befrage dazu z.B. deine Sitznachbarn nach ihrem Alter und 
      baue eine Tabelle mit den Spalten Vorname, Name und Alter auf.   
*/
}
