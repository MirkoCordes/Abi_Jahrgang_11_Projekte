#include <iostream>
using namespace std;
unsigned int a, b, flaeche, umfang, v;
string V1;

int main(){
	char ae = 132;
	char oe = 148;
cout << "Breite (in cm): ";
cin >> a;
cout << "H" << oe << "he (in cm): ";
cin >> b;

flaeche = a*b;
umfang = 2*a + 2*b;

cout << "Wollen Sie den Volumen berechnen (Y/N)? ";
cin >> V1;

if (V1 == "y" || V1 == "Y"){
	cout << "Tiefe (in cm): ";
	cin >> v;
	
	cout << "Der Volumen betr" << ae << "gt " << v << "cm\n";
} 


cout << "\nDie Fl" << ae << "che betr" << ae << "gt " << flaeche << "cm\xFD\n";
cout << "Der Umfang betr" << ae << "gt " << umfang << "cm\n";

return 0;
}
