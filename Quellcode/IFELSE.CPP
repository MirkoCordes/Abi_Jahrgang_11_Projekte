/*---------------------------------------------------------------------------
 Der Programmablauf in unserem kleinen mathematischen Programm CONSTANT.CPP
 ist zwingend vorgeschrieben: Es erfolgt eine Kreisberechnung und dann wird
 das Programm beendet. Häufig ist es jedoch erforderlich, daß z.B. in
 Abhängigkeit eines Ereignisses oder einer Programmabfrage im Programm ver-
 zweigt wird. C++ bietet hier die if-Anweisung.

 Die if-Anweisung besteht aus einer Bedingung und einem Anweisungsblock.
 Liefert die Bedingung eine wahre Aussage, dann wird der Anweisungsblock
 ausgeführt. Ist die Aussage der Bedingung falsch, dann wird der Anweisungs-
 block nicht ausgeführt, und das Programm fährt dahinter fort. Die Syntax
 ist wie folgt:
						if (Bedingung) {
							(Anweisungsblock)
						}

 BEACHTE: Besteht der Anweisungsblock aus einer einzigen Anweisung, so können
 die geschweiften Klammern entfallen.

 Die Bedingung in den Klammern enthält in der Regel einen Vergleichsausdruck.
 Wenn der Vergleich den Wert 0 liefert, entspricht das dem booleschen Wert
 FALSE. Der Vergleich ist also "unwahr" und der Anweisungsblock wird über-
 sprungen. Ergibt sich ein Wert ungleich 0 (entsprechend dem booleschen Wert
 TRUE), ist der Vergleich "wahr" und der Anweisungsblock wird ausgeführt.
 Eine Übersicht über die Vergleichsoperatoren zeigt die Tabelle unten!

 Oftmals soll ein Programm bei erfüllter Bedingung (TRUE) den einen Zweig
 durchlaufen und bei nicht erfüllter Bedingung (FALSE) einen anderen.
 Hilfreich ist hier die else-Anweisung als Ergänzung der if-Anweisung.
 Syntax:
						if (Bedingung) {
							(Anweisungsblock)
						}
						else {
							(Anweisungsblock)
						}

 Das folgende Beispiel veranschaulicht den Einsatz einer if-Anweisung mit
 else-Zweig.
---------------------------------------------------------------------------*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int ersteZahl, zweiteZahl;
	cout << "Bitte eine grosse Zahl eingeben: ";
	cin >> ersteZahl;
	cout << "\nBitte eine kleine Zahl eingeben: ";
	cin >> zweiteZahl;
	
	if (ersteZahl > zweiteZahl) {
		cout << "\nDanke!";
    }
    else if (ersteZahl == zweiteZahl) {
		cout << "\nDie zweite Zahl ist identisch mit der ersten!";
	 	cout << "\n--------------------------------\nDas naechste mal bitte besser aufpassen!";
	}
	else {
		cout << "\nDie zweite Zahl ist groesser!";
	 	cout << "\n--------------------------------\nDas naechste mal bitte besser aufpassen!";
    } 

	getch();

   /* TABELLE: Vergleichsoperatoren

	Operator				Symbol	Beispiel		Rückgabewert
	------------------------------------------------------------
	Gleich					==			100==50;	false

	Ungleich				!=			100!=50;	true

	Größer als				>			100>50;		true
	
	Größer als oder         >=			50>=50;		true
	gleich

	Kleiner als				<			100<50;		false

	Kleiner als oder		<=			100<=50;	false
	gleich


	AUFGABEN:

	a) Notieren Sie in der Tabelle oben für jede Vergleichsart den Rückgabe-
	wert (TRUE oder FALSE).

	b) Erweitern Sie Ihr Programm zur Umrechnung der Temperaturmaßeinheiten 
    dahingehend, daß anstelle der Berechnung eine Fehlermeldung	erfolgt, 
    wenn die eingegebene Temperatur im unerlaubten Bereich (kleiner als -273.15) 
    liegt.

	c) Schreiben Sie ein Programm, das einen Preis und einen Mengenwert ein-
	liest. Das Produkt aus Preis und Menge ergibt den Umsatz.
	Ist der errechnete Umsatzwert größer oder gleich 1000, soll die Bild-
	schirmausgabe in TEURO, andernfalls in EUR erfolgen.

*/
}
