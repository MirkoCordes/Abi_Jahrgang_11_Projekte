#include <iostream>
#include <math.h>

using namespace std;

float alphaBow, alpha, beta, kathFirst, kathSecond, hypoC;
const double PI = 3.14159;
const int gamma = 90;

int main(){
	//Eingabe beider Katheten
	cout << "Bitte die Ankathete eingeben! ";
	cin >> kathFirst;
	cout << "Bitte die Gegenkathete eingeben! ";
	cin >> kathSecond;
	
	//Berechnungen
	hypoC = sqrtf((kathFirst*kathFirst)+(kathSecond*kathSecond)); 		//Hypotenuse
	alphaBow = atan(kathSecond/kathFirst); 								//alpha Radiant
	alpha = (alphaBow * 180)/PI;										//alpha Grad
	beta = 180 - alpha - gamma;											//beta
	
	//Ausgabe der Winkel sowie der Hypotenuse
	cout << "Hypotenuse c = " << hypoC << "\n";
	cout << "Winkel alpha = " << alpha << "\n";
	cout << "Winkel beta = " << beta << "\n";
	cout << "Winkel gamma = " << gamma << "\n";
}
