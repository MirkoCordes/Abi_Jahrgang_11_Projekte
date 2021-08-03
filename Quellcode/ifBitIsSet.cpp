/* ifBitIsSet.cpp  

AUFGABEN:
a) Finde heraus, mit welcher Verknüpfung (binäres UND oder binäres ODER) geprüft werden
   kann, ob ein bestimmtes Bit in (der binären Codierung) einer Zahl gesetzt ist.
   Also: zahl | (1<<bit)  
   Oder: zahl & (1<<bit)
   
b) Speichere das Programm unter ifBitIsClear.cpp neu ab.
   Ändere den Quellcode dahingehend ab, dass geprüft wird, ob in einer Zahl ein Bit nicht
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

    if (bit_is_set(zahl,bit) )  // ja-Zweig wird bei Rückgabe von 1,
                                // nein-Zweig bei Rückgabe von 0 betreten
       cout << "\nBit " << bit << " ist in " << zahl << " gesetzt.\n";
    else
       cout << "\nBit " << bit << " ist in " << zahl << " nicht gesetzt.\n";

    getch();
    return 0;
}



