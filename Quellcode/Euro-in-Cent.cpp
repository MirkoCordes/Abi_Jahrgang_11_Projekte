#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int mengeEin, summeGanz, cent, summeCent;
	float euroEin, summeEuro;
	cout << "Preis (in Euro): ";
	cin >> euroEin;
	cout << "\nMenge (stk): ";
	cin >> mengeEin;
	
	system("cls");
	
	summeCent = (euroEin * mengeEin) * 100;
	summeEuro = summeCent / 100;
	summeGanz = summeEuro;
	cent = summeCent - (summeGanz*100);
	
	cout << "--------------------------------\n";
	
	 if (summeEuro < 1){
	 	cout << "Der Kaufpreis betraegt " << summeCent << " Cent.";
	 }
	 else if (cent != 0){
	 	cout << "Der Kaufpreis betraegt " << summeGanz << " Euro und " << cent << " Cent.";
	 }
	 else{
	 	cout << "Der Kaufpreis betraegt " << summeEuro << " Euro.";
	 }
	 
	 //HA in Euro und Cent
return 0;
}
