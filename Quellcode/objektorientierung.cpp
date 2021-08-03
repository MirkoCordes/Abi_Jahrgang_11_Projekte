#include <iostream>
#include <stdlib.h>

using namespace std;
bool loginCorrect = false;

class Girokonto {
	private:
		float kontostand;
		string kontoinhaber;
		unsigned int kontonummer;
		unsigned short pin;
		string id;
	
	public:
	
	void initkonto(unsigned int p_knr, string p_id, unsigned short p_pin, string p_kontoinhaber, float p_kontostand){
		kontonummer = p_knr;
		id = p_id;
		pin = p_pin;
		kontoinhaber = p_kontoinhaber;
		kontostand = p_kontostand;
	}
	
	void kontostand_anzeigen(){
		cout << "kontostand aktuell: "<< kontostand;
	}
	
	void login(){
		unsigned int ktNummer;
		unsigned short proofedPin;
		cout << "Bitte geben sie ihre Kontonummer an: ";
		cin >> ktNummer;
		cout << "Bitte geben sie ihre Pin an: ";
		cin >> proofedPin;
		
		if(ktNummer == kontonummer){
			if(proofedPin == pin){
				loginCorrect = true;
			}
		}
	}
	
	void abheben(){
		int AbbuchungsSumme;
		cout << "Wieviel wollen Sie Abheben?\t";
		cin >> AbbuchungsSumme;
		
		if (AbbuchungsSumme <= kontostand){
			kontostand -= AbbuchungsSumme;
			cout << "Der Betrag wurde ausgezahlt.\n";
			kontostand_anzeigen();
		} else {
			cout << "\n------------------";
			cout << "\nWählen sie einen kleineren Betrag!\n";
			abheben();
		}		
	}
	
	void einzahlen(){
		int Summe;
		cout << "Wieviel wollen Sie einzahlen?\t";
		cin >> Summe;
		
		if (Summe <= 1000){
			kontostand += Summe;
			cout << "Der Betrag wurde eingezahlt.\n";
			kontostand_anzeigen();
		} else {
			cout << "\n------------------";
			cout << "\nDer Betrag muss kleiner sein, als 1000€!\n";
			einzahlen();
		}
	}
	
	void ueberweisen(){
		
	}
	
};

int main(){
	Girokonto mykonto1;
	Girokonto mykonto2;
	
	char menuoption;
	
	mykonto1.initkonto(1234, "007", 789, "Max", 10.50);
	mykonto2.initkonto(5678, "008", 777, "Mueller", 900);
	
	mykonto1.login();
	
	
	if(loginCorrect){
		mykonto1.kontostand_anzeigen();
		do {
			cout << "\n------------------\n";
			cout << "\n\n(A)bheben\n(E)inzahlen\n(U)eberweisen\n(S)chließen\n";
			cin >> menuoption;
			switch(menuoption){
				case 'A': mykonto1.abheben();break;
				case 'E': mykonto1.einzahlen();break;
				case 'U': mykonto1.ueberweisen();break;
				case 'S': break;
			}	
		} while(menuoption != 'S');
	} else {
		cout << "Falsche Pin oder falsches Passwort!";
	}
	
	
	
}

