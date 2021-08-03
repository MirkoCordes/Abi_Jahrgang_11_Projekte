#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
double randHundred;
char answere;
int i;

int main(){
	srand((unsigned) time(0));
	
	randHundred = rand()%99;
	cout << randHundred << "\n";
	
	while(i < 1){
		cout << "Zufallszahl zwischen 0 und 99 \n(N)eu (E)nde\n";
		cin >> answere;
		
		if (answere == 'E' || answere == 'e'){
			i=1;
		} else if (answere == 'N' || answere == 'n') {
			randHundred = rand()%99;
			cout << randHundred << "\n\n";
		} else {
			cout << "falsche Antwort!!!!!\n\n";
		}
		
	}
	return 0;
}
