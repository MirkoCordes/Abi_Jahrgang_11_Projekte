#include <iostream>
#include <conio.h>

using namespace std;
float verbrauch, liter;
unsigned short int kilometer;
const int hundert = 100;

int main(){
	//Literangabe wird abgefragt
	cout << "Wieviel Liter haben Sie seit dem letzten Mal getankt (in L)? ";
	cin >> liter;
	
	//Kilometerangabe wird abgefragt
	cout << "\n\nWieviel Kilometer konnten Sie, bis zum nächsten mal tanken, fahren (in Km)? ";
	cin >> kilometer;
	
	//Kraftstoffverbrauch wird berechnet ((LITER / KILOMETER) * 100
	verbrauch = (liter/kilometer)*hundert;  												//verbrauch = ((float)liter/kilometer)*hundert;  
	
	//Kraftstoffverbrauch wird ausgegeben
	cout << "\n\n\nDer Kraftstoffverbrauch liegt bei \"" << verbrauch << " L/100Km\".";
}
