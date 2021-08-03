#include <iostream>

using namespace std;
int askedNumber;

const int 
	modTwo = 2, //Modulowerte 2, 3, 4 und 5
	modTree = 3,
	modFour = 4,
	modFive = 5;

int main(){
	//Abfrage der Zahl
	cout << "Bitte Zahl eingeben: ";
	cin >> askedNumber;
	
	//Zahl positiv oder negativ
	if (askedNumber != 0 && askedNumber >= 0){
		cout << "Die Zahl ist positiv.";
		
		//durch 2 teilbar
		if((askedNumber % modTwo) == 0){
			cout << "\nDie Zahl ist gerade.";
		} else {
			cout << "\nDie Zahl ist ungerade.";
		}
	
		//durch 3 teilbar
		if((askedNumber % modTree) == 0) {
			cout << "\nDie Zahl ist durch 3 teilbar.";
		} else {
			cout << "\nDie Zahl ist nicht durch 3 teilbar.";
		}
	
		//durch 4 teilbar
		if((askedNumber % modFour) == 0) {
			cout << "\nDie Zahl ist durch 4 teilbar.";
		} else {
			cout << "\nDie Zahl ist nicht durch 4 teilbar.";
		}
		
		//durch 5 teilbar
		if((askedNumber % modFive) == 0) {
			cout << "\nDie Zahl ist durch 5 teilbar.";
		} else {
			cout << "\nDie Zahl ist nicht durch 5 teilbar.";
		}
	} else {
		cout << "Die Zahl ist negativ.";
	}
	
	return 0;
}
