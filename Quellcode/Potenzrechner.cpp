#include <iostream>
using namespace std;
double potenz(double bas, double exp){
	double ergebnis = 1, negZahl;
	

	for(int i = 1; i<=exp; i++){
		ergebnis = ergebnis*bas;
	}		
	return ergebnis;
	}
	
int main(){
	int x, y;
	cout << "Basiswert: ";
	cin >> x;
	cout << "Potenzwert: ";
	cin >> y;
	
	cout << "\nErgebnis= " << potenz(x, y);
}
