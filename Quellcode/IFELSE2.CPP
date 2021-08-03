#include <iostream>

using namespace std;

int main() {
	int zahl1, zahl2;
	cout << "Zahl 1: ";
	cin >> zahl1;
	cout << "\nZahl 2: ";
	cin >> zahl2;

    // Warum ist die folgende if-else-Konstruktion nicht sinnvoll?
	if(zahl1 > zahl2)
       cout << "Zahl 1 ist groesser!";
	else 
       if(zahl2 > zahl1)  
          cout << "Zahl 2 ist groesser!";
       else
          if(zahl1 == zahl2)
             cout << "Beide Zahlen sind gleich gross!";


    return 0;
}
