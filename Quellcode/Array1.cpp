/* Erarbeite (verstehe) die Funktionalität des untenstehenden Programms.
   
   Speichere die Datei als Datei Array2.cpp neu ab und ändere den Quellcode
   dahingehend ab, dass die Arrayelemente nicht fest zugewiesen sondern per
   Tastatur eingelesen werden. Die Anweisung für die Definition lautet dann:
        int einArray[5];
   Das Array besteht hier also aus 5 Elementen.
   Das Einlesen der Zahlen soll ebenfalls in einer for-Schleife erfolgen.
*/ 
   
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
   int einArray[5], eingabe;

   
   	for (int i=0; i<=4; i++) {
   		cout << "Bitte die " << i+1 << ". Zahl eingeben: \t";
     	cin >> eingabe;
     	system("cls");
     	einArray[i] = eingabe;
 	}
	system("cls");
   cout << "Zugewiesen wurden:\n";
   for (int i=0; i<=4; i++) {
   	cout << i+1 << ". " << einArray[i] << "\n";
   }
   
           
   return 0;    
}
