#include <iostream>

using namespace std;

double nFakultaet(int x){
	int ergebnis = 1;
	
	
	for(int i = 1; i<x; i++){
		ergebnis = ergebnis*(i+1);
	}		
	return ergebnis;
	}
	
int main(){
	int x;
	cout << "Basiswert: ";
	cin >> x;
	
	cout << "\nErgebnis= " << nFakultaet(x);
}
