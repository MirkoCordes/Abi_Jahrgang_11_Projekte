#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
#include <vector>

using namespace std;

void kiGame(int muenzen){
	system("cls");
	cout << "----Nimm-Spiel----" << endl;
	int zug;
	double randNumbr;
	char gamer = 'A';
	bool falscheEingabe = false;
	
	cout << "Du spielst gegen einen Bot.";

	do {
		cout << "\nEs liegen " << muenzen << " M" << char(129) << "nzen auf dem Tisch";
		cout << "\nDu bist am Zug...\n\nWieviele M" << char(129) << "nzen m" << char(148) << "chtest du ziehen? \t";
		cin >> zug;
		
		if (zug <= 3){
			falscheEingabe = false;
			muenzen -= zug;
			if(muenzen <= 0){
				cout << "\n--------------------------------\nDu hast gewonnen!!!";
				break;
			} 
		} else {
			falscheEingabe = true;
			cout << "Falsche Eingabe!!!";
		}
		system("cls");
		cout << "----Nimm-Spiel----" << endl;
		if (falscheEingabe){
			if (gamer == 'B'){
				gamer = 'A';
			} else {
				gamer = 'B';
			}
		} else {
			randNumbr = rand()%3 +1;
			zug = randNumbr;
			cout << "\nEs liegen " << muenzen << " M" << char(129) << "nzen auf dem Tisch";
			muenzen -= zug;
			cout << "\nDer Bot hat " << zug << " M" << char(129) << "nzen gezogen.";
			if(muenzen <= 0){
				cout << "\n--------------------------------\nDer Bot hat gewonnen!!!\n--------------------------------\n";
				break;
			} 
		}
		
	}while(muenzen != 0);
	system("pause");
}

void memberGame(int muenzen){
	system("cls");
	cout << "----Nimm-Spiel----" << endl;
	int zug;
	char gamer = 'A';
	bool falscheEingabe = false;
	
	cout << "Du spielst mit einem anderen Mitspieler.";

	do {
		if (!falscheEingabe){
			if (gamer == 'B'){
				gamer = 'A';
			} else {
				gamer = 'B';
			}
		}
		
		cout << "\nEs liegen " << muenzen << " M" << char(129) << "nzen auf dem Tisch";
		cout << "\nSpieler " << gamer << " ist am zug...\n\nWieviele M" << char(129) << "nzen m" << char(148) << "chtest du ziehen? \t";
		cin >> zug;
		
		if (zug <= 3){
			falscheEingabe = false;
			muenzen -= zug;
			if(muenzen <= 0){
				cout << "\n--------------------------------\nSpieler " << gamer << " hat gewonnen!!!\n--------------------------------\n";
			} 
		} else {
			falscheEingabe = true;
			cout << "Falsche Eingabe!!!";
		}	
		system("cls");
	}while(muenzen != 0);
	system("pause");
}

int main(){
	srand((unsigned) time(0));
	int muenzen;
	char modi;
	
	do{
		system("cls");
		cout << "----Nimm-Spiel----" << endl;
		cout << "Es liegen M" << char(129) << "nzen auf dem Tisch.\nDu kannst pro Zug jeweils 0-3 M" << char(129) << "nzen ziehen.\nMit wievielen M" << char(129) << "nzen willst du spielen? \n\nAnzahl: \t";
		cin >> muenzen;
		system("cls");
		cout << "----Nimm-Spiel----" << endl;
		cout << "\nDu spielst mit " << muenzen << " M" << char(129) << "nzen. \nGegen wen m" << char(148) << "chtest du spielen?";
		cout << "\n\nKI \t\t= a \nMitspieler\t= b \nExit\t\t= e\nEingabe: \t";
		cin >> modi;
		switch(modi){
		case 'a' : kiGame(muenzen); break;
		case 'b' : memberGame(muenzen); break;
		case 'e' : break; 
		}	
	}while(modi!=false);
	
}
