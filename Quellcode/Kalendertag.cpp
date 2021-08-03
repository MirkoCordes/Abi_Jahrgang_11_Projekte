#include <iostream>
#include <stdlib.h>

using namespace std;

int schaltja(int jahr){
      
   if (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0){
	return true;
   } else if (jahr % 4 == 0 && jahr % 100 != 0){
   	return true;
   } else {
   	return false;
   }
   
   return true;
}

int main(){
	int tagNum, monNum, jahrNum, b=0, monTage = 0, TageDerJahre;
	unsigned int anzahlSchaltjahr = 0, anzahlTage = 0, anzahlMon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string wochenTag, wochentage[7] = {"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};

	cout << "----Tagberechner----" << endl;
	cout << "Tag: \t";
	cin >> tagNum;
	cout << "Monat: \t";
	cin >> monNum;
	cout << "Jahr \t";
	cin >> jahrNum;
	
	//Berechnung der Anzahl der Schaltjahre
	for(int i = 1; i<jahrNum; i++){
		if(schaltja(i)){
			anzahlSchaltjahr += 1;
		}
	}
	
	//Prüfen, ob angegebenes Jahr ein Schaltjahr ist
	if(schaltja(jahrNum)){
			anzahlMon[1] = 29;
		}
	
	//Berechnung der Monatstage im derzeitigen Jahr
	for(int i= 0; i<monNum-1; i++){
		monTage += anzahlMon[i];
	}
	
	//alle Tage berechnen
	TageDerJahre = (jahrNum-1)*365;
	anzahlTage = TageDerJahre+anzahlSchaltjahr+monTage+tagNum;
	
	//Auswertung der Kalenderwoche
	for (int i = 1; i<anzahlTage; i++){
		b++;
		if (b==7){
			b=0;
		}//1.1.1. War ein montag = von montag bis sonntag (bis ende des Jahres prüfen)
		
	}
	
	cout << "\nDer " << tagNum << "." << monNum << "." << jahrNum << " ist ein " << wochentage[b];
}
