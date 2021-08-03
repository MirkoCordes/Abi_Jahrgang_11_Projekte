#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int mengeEin;
	float euroEin, summe;
	cout << "Preis (in €): ";
	cin >> euroEin;
	cout << "\nMenge (stk): ";
	cin >> mengeEin;
	
	summe = euroEin * mengeEin;
	cout << "Du bezahlst " << summe << "€ bei " << mengeEin << "Stück.\n\n--------------------------------\n";
	
	 if (summe >= 1000){
	 	cout << "Ergebnis: !TEURO!";
	 }else{
	 	cout << "Ergebnis: !EURO!";
	 }
return 0;
}
