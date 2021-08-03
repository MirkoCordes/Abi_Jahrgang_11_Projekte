//	setBit_1.cpp  										
#include <iostream>
#include <conio.h>
using namespace std;
unsigned short zahl;

int toggleBit(unsigned short bit) {
    // Setzen des Bits:
    zahl = zahl ^ (1<<bit);  
     
	 return zahl;    
}

int main()
{
   unsigned short bit;

   cout << "Setzen eines Bits\n\n";

   cout << "Zahl: ";
   cin >> zahl;
   cout << "Bit: ";
   cin >> bit;

   // Ergbnisausgabe mit Aufruf der Funktion "setBit"
   cout << toggleBit(bit);

   
   getch();
   return 0;
   
/* AUFGABE 1:
   Ergänze den obigen Quellcode!
           
   AUFGABE 2:        
   Speichere das Programm unter setBit_2.cpp neu ab.
   Ändere den Quellcode dahingehend ab, dass die Variable zahl global definiert wird.
   
   AUFGABE 3:
   Speichere setBit_2.cpp als Datei clearBit.cpp ab und ersetze die Funktion "setBit" 
   durch eine Funktion "clearBit", die namensgemäß ein beliebiges Bit in einer Zahl 
   löscht.
   
   AUFGABE 4:
   Speichere clearBit.cpp als Datei toggleBit.cpp ab und ersetze die Funktion "clearBit" 
   durch eine Funktion "toggleBit", die namensgemäß ein beliebiges Bit in einer Zahl 
   toggelt. Toggeln bedeutet, dass sich der Wert eines Bits von 0 auf 1 ändert 
   bzw. umgekehrt.
*/
}



