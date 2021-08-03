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

   cout << "L�nge 1 (cm): ";
   cin >> g1;
   cout << "L�nge 2 (cm): ";
   cin >> g2;
   cout << "H�he (cm): ";
   cin >> h1;
   
   f1 = (g1 +g2) / 2 * h1;
	
   cout << "Die Fl�che betr�gt " << f1 << " cm\xFD!\n\n";
   
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
   a) Der obige Quellcode k�nnte im Prinzip ein Programm zur Berechnung der 
   Fl�che eines Rechtecks sein.
   Welchen Grund k�nnte es haben, dass hier f�r die Variablen a und b ein 
   2 Byte, f�r die Ergebnisvariable "produkt" hingegen ein 4 Byte gro�er Daten-
   typ gew�hlt wurde?
   

   b) Schreibe ein Programm, das die L�nge g1, die L�nge g2 und die H�he h eines	
   Trapezes per Tastatur einliest und daraus die Fl�che berechnet und auf dem 
   Bildschirm ausgibt. Der Dialog k�nnte wie folgt aussehen:

      Programm Trapezberechnung
      -------------------------
	   L�nge 1 in cm:
       L�nge 2 in cm:
       H�he in cm:
       Die Fl�che betr�gt xxxxxxx cm�!

   c) Teste die Funktionalit�t des Programms mit verschiedenen Eingaben! 
   Sind alle Ergebnisse plausibel?

   d) Eine sch�ne Hausaufgabe:
   Schreibe ein Programm zur Umrechnung der Temperaturma�einheit Grad Celsius 
   (�C) in die Ma�einheit Kelvin (K).	Vor der Codierung des Quellcodes erstelle 
   bitte ein Nassi-Shneiderman-Struktogramm zu diesem Algorithmus. 
   Zur Erinnerung: 0 K entspricht -273,15�C! Definiere f�r die Zahl 273,15 eine 
   Konstante z.B. namens CK. Der Dialog k�nnte wie folgt aussehen:

	   PROGRAMM ZUR UMRECHNUNG VON �C in K
      -----------------------------------
	   Temperatur in �C:
	   Ergebnis: ... �C entsprechen ... K
*/
}
