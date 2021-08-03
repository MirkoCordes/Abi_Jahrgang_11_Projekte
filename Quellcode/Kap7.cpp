// AUFGABEN zum Kapitel 7 des Unterrichtsskripts
// *********************************************
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   unsigned short int d, e, g1, g2, h1;  
   float Cl, KV;
   unsigned int produkt, f1; // entspricht in einer 32-Bit-Umgebung unsigned long int
   const float CK = 273.15;
   cout << "Bitte die Zahl a eingeben: ";
   cin >> d;
   cout << "Bitte die Zahl b eingeben: ";
   cin >> e;
   produkt=d*e;
   cout << "Das Produkt aus a und b betraegt " << produkt << "\n\n\n";

   cout << "Länge 1 (cm): ";
   cin >> g1;
   cout << "Länge 2 (cm): ";
   cin >> g2;
   cout << "Höhe (cm): ";
   cin >> h1;
   
   f1 = (g1 +g2) / 2 * h1;
	
   cout << "Die Fläche beträgt " << f1 << " cm\xFD!\n\n";
   
   cout << "Temperatur in *C: ";
   cin >> Cl;
   
   KV = Cl + CK;
   
   if (KV < 0 ){
   		cout << "ERROR! false number";
   		exit(1);
   } else {
   		cout << "Ergebnis: " << Cl << "*C entsprechen " << KV << "K!\n";
   }
   
   return 0;

/* AUFGABEN:
   a) Der obige Quellcode könnte im Prinzip ein Programm zur Berechnung der 
   Fläche eines Rechtecks sein.
   Welchen Grund könnte es haben, dass hier für die Variablen a und b ein 
   2 Byte, für die Ergebnisvariable "produkt" hingegen ein 4 Byte großer Daten-
   typ gewählt wurde?
   

   b) Schreibe ein Programm, das die Länge g1, die Länge g2 und die Höhe h eines	
   Trapezes per Tastatur einliest und daraus die Fläche berechnet und auf dem 
   Bildschirm ausgibt. Der Dialog könnte wie folgt aussehen:

      Programm Trapezberechnung
      -------------------------
	   Länge 1 in cm:
       Länge 2 in cm:
       Höhe in cm:
       Die Fläche beträgt xxxxxxx cm²!

   c) Teste die Funktionalität des Programms mit verschiedenen Eingaben! 
   Sind alle Ergebnisse plausibel?

   d) Eine schöne Hausaufgabe:
   Schreibe ein Programm zur Umrechnung der Temperaturmaßeinheit Grad Celsius 
   (°C) in die Maßeinheit Kelvin (K).	Vor der Codierung des Quellcodes erstelle 
   bitte ein Nassi-Shneiderman-Struktogramm zu diesem Algorithmus. 
   Zur Erinnerung: 0 K entspricht -273,15°C! Definiere für die Zahl 273,15 eine 
   Konstante z.B. namens CK. Der Dialog könnte wie folgt aussehen:

	   PROGRAMM ZUR UMRECHNUNG VON °C in K
      -----------------------------------
	   Temperatur in °C:
	   Ergebnis: ... °C entsprechen ... K
*/
}
