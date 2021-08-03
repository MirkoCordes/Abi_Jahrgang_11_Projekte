// Eigener Name:

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
   unsigned short int zahl[20];
   unsigned short augen[6]={0,0,0,0,0,0};  // für statistische Zwecke

   srand(static_cast<int>(time(NULL)));

   // Hier ist eine for-Schleife zu definieren, die 20 Zufallszahlen zwischen 1 und 6 ermittelt und in das
   // Array "zahl" schreibt. 
   // Zu verwenden ist die Funktion rand(). Beispiel: rand()%6 liefert eine Zufallszahl zwischen 0 und 5.

   for (int i=0; i<20; i++) {
		zahl[i] = rand()%6+1;
   }

   // Hier ist eine for-Schleife zu definieren, die die Zufallszahlen mit Leerzeichen getrennt ausgibt.
    cout << "Die 20 Zufallszahlen: ";
	for (int i=0; i<20; i++) {
		cout << zahl[i] << " ";
   }
   cout << endl;
   
   // Hier ist die Auswertung der gezogenen Zufallszahlen vorzunehmen:
	for (int i=0; i<20; i++){
		for (int b=0; b<6; b++){
		if(zahl[i] == b+1){
			augen[b] += 1;
		}
		}
	}
	for(int i=0; i<6; i++){
		cout << "\n" << i+1 << " = " << augen[i];
	}
  
   cout << endl;

   return 0;
}
