/* Schreibe ein Programm, das per Tastatur eine Temperatur (in  ) einliest
 * und prüft, ob die Temperatur im erlaubten Bereich von -20°C bis +40°C liegt.
 * In einem ersten Lösungsansatz soll die Meldung "Temperatur i.O." bzw. 
 * "Temperatur außerhalb des erlaubten Bereichs!" ausgegeben werden. 
 *
 * Verfeinere die Ausgabe: "Achtung, Temperatur kleiner als -20°C!" bzw.
 *                         "Achtung, Temperatur größer als 40°C!"
 ******************************************************************************/ 
#include <iostream>

using namespace std;

float TempC;
char radius= 248;

int main() {
	cout << "Temperatur (in " << radius << "C): ";
	cin >> TempC;
	system("cls");
	
	//Temperatur zwischen -20 und 40 Grad
	if (TempC >= -20 && TempC <= 40){
		cout << "Temperatur i.O.";
	}
	
	//Temperatur kleiner als -20
	else if(TempC < -20 ){
		cout << "Achtung, Temperatur kleiner als -20" << radius << "C!";
	}
	
	//Temperatur größer als 40
	else{
		cout << "Achtung, Temperatur gr" << char(148) << char(225) << "er als 40" << radius << "C!";
	}


    return 0;
}
