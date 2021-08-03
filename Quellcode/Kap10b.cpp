/* if ... else ... - Vertiefungsaufgabe
   Die nachfolgenden Programmbeispiele demonstrieren die richtige Verwendung
   von Klammern in verschachtelten if-Anweisungen.

   a) Das Programm soll folgendes leisten:
   - Ist die Eingabe grösser als 100, sol soll "Grösser als 100. Danke!"
     ausgegeben werden.
   - Ist die Eingabe kleiner als 10, sol soll "Kleiner als 10. Danke!"
     ausgegeben werden.
   Der Eingabebereich von 10 bis 100 soll zunächst unberücksichtigt bleiben.
   Welche der drei Programmbeispiele funktionieren einwandfrei?
   Bitte erst gründlich durchdenken und dann testen!

   b) Ergänzen Sie das(die) funktionstüchtige(n) Programm(e) dahingehend,
   dass bei Eingabe einer Zahl grösser oder gleich 10 und kleiner oder gleich
   100 eine Fehlermeldung (z.B. "Schlafmütze") ausgegeben wird.
   Erstellen Sie vor!!! der Codierung der Anweisungen zu einer Programmvariante
   ein Struktogramm und setzen Sie exakt dieses Struktogramm in ein Programm um! */

#include <iostream>
using namespace std;

int main() {
	int z;

	// Programmbeispiel 1 funktioniert
	cout << "Programmbeispiel 1\nZahl: ";
	cin >> z;

	if (z > 100)
		cout << "Grösser als 100. Danke!";
	else if (z < 10)
			cout << "Kleiner als 10. Danke!";
	else
		cout << "Schlafmütze";

	// Programmbeispiel 3 funktioniert
	cout << "\n\n\nProgrammbeispiel 3\nZahl: ";
	cin >> z;

	if (z >= 10) {
		if (z > 100){
			cout << "Grösser als 100. Danke!";
		}
		else{
			cout << "Schlafmütze";
		}
	}
	else
		cout << "Kleiner als 10. Danke!";
		
   return 0;
}
