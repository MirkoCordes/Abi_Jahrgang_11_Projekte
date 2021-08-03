/* ifBitIsSet.cpp  

AUFGABEN:
a) Finde heraus, mit welcher Verkn�pfung (bin�res UND oder bin�res ODER) gepr�ft werden
   kann, ob ein bestimmtes Bit in (der bin�ren Codierung) einer Zahl gesetzt ist.
   Also: zahl | (1<<bit)  
   Oder: zahl & (1<<bit)
   
b) Speichere das Programm unter ifBitIsClear.cpp neu ab.
   �ndere den Quellcode dahingehend ab, dass gepr�ft wird, ob in einer Zahl ein Bit nicht
   gesetzt (sozusagen "gecleart") ist.
*/ 										

#include <iostream>
#include <conio.h>
using namespace std;

bool bit_is_set(unsigned short zahl, unsigned short bit) {  // unsigned short als Funktionstyp ginge auch
    if(zahl & (1<<bit))
       return true;  // gleichbedeutend mit return 1;
    else
       return false; // gleichbedeutend mit return 0;
}

int main() {
	unsigned short zahl, bit;
	
	cout << "Zahl: ";
	cin >> zahl;
	cout << "Bit: ";
	cin >> bit;

    if (bit_is_set(zahl,bit) )  // ja-Zweig wird bei R�ckgabe von 1,
                                // nein-Zweig bei R�ckgabe von 0 betreten
       cout << "\nBit " << bit << " ist in " << zahl << " gesetzt.\n";
    else
       cout << "\nBit " << bit << " ist in " << zahl << " nicht gesetzt.\n";

    getch();
    return 0;
}



