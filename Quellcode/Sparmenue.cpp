#include <iostream>
#include <stdlib.h>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(){
	
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);

	unsigned int art;

	cout << "Wie moechten Sie sparen?" << endl;
	cout << "*****************************" << endl;
	cout << "1 >> Jahreszins" << endl;
	cout << "2 >> Sparrate" << endl;
	cout << "3 >> Ende" << endl << endl;
	cout << "Deine Wahl: ";
	cin >> art;
	
	if(art == 1){
		float kapi, ziel, jzins, mzins, curkap;
		unsigned int monat = 0, jahr = 0;
		cout << "Geben Sie ihr Kapital an: ";
		cin >> kapi;
		cout << "Geben Sie ihr Sparziel an: ";
		cin >> ziel;
		cout << "Geben Sie den Jahreszinssatz an: ";
		cin >> jzins;
		
		curkap = kapi;
		mzins = jzins/12;
		
		cout << "\tJahr\t" << "Monat\t" << "Zinsen\t" << "\tKapital" << endl;
		
		while(ziel > curkap){
			float zinsbetrag, tempcap;
			unsigned int monate;
			tempcap = curkap;
			monat++;
			monate = monat%12;
			zinsbetrag = (tempcap/100)*mzins;
			curkap = tempcap + zinsbetrag;
			if((((monat - monate)/12)+1) == jahr){
				cout << "\t" << "\t" << monate << "\t" << zinsbetrag << "\t\t" << curkap << endl;
			}else{
				jahr = (((monat - monate)/12)+1);
				cout << "---------------------------------------------------" << endl;
				cout << "\t" << jahr << "\t" << monate << "\t" << zinsbetrag << "\t\t" << curkap << endl;
			}
		}
	}else if(art == 2){
		float kapi, ziel, jzins, mzins, curkap, btr;
		unsigned int monat = 0, jahr = 0;
		cout << "Geben Sie ihr Kapital an: ";
		cin >> kapi;
		cout << "Geben Sie ihr Sparziel an: ";
		cin >> ziel;
		cout << "Geben Sie den Jahreszinssatz an: ";
		cin >> jzins;
		cout << "Geben Sie den Monatsbeitrag (Sparrate) an: ";
		cin >> btr;
		
		curkap = kapi;
		mzins = jzins/12;
		
		cout << "\tJahr\t" << "Monat\t" << "Zinsen\t" << "\tKapital" << endl;
		
		while(ziel > curkap){
			float zinsbetrag, tempcap;
			unsigned int monate;
			tempcap = curkap;
			monat++;
			monate = monat%12;
			zinsbetrag = (tempcap/100)*mzins;
			curkap = tempcap + zinsbetrag + btr;
			if((((monat - monate)/12)+1) == jahr){
				cout << "\t" << "\t" << monate << "\t" << zinsbetrag << "\t\t" << curkap << endl;
			}else{
				jahr = (((monat - monate)/12)+1);
				cout << "---------------------------------------------------" << endl;
				cout << "\t" << jahr << "\t" << monate << "\t" << zinsbetrag << "\t\t" << curkap << endl;
			}
		}
	}else if(art == 3){
		cout << "Programm wird beendet!" << endl;
	}else{
		cout << "Unbekannte Eingabe!" << endl;
	}
	
		
		
	return 0;
	
}
