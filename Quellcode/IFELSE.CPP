/*---------------------------------------------------------------------------
 Der Programmablauf in unserem kleinen mathematischen Programm CONSTANT.CPP
 ist zwingend vorgeschrieben: Es erfolgt eine Kreisberechnung und dann wird
 das Programm beendet. H�ufig ist es jedoch erforderlich, da� z.B. in
 Abh�ngigkeit eines Ereignisses oder einer Programmabfrage im Programm ver-
 zweigt wird. C++ bietet hier die if-Anweisung.

 Die if-Anweisung besteht aus einer Bedingung und einem Anweisungsblock.
 Liefert die Bedingung eine wahre Aussage, dann wird der Anweisungsblock
 ausgef�hrt. Ist die Aussage der Bedingung falsch, dann wird der Anweisungs-
 block nicht ausgef�hrt, und das Programm f�hrt dahinter fort. Die Syntax
 ist wie folgt:
						if (Bedingung) {
							(Anweisungsblock)
						}

 BEACHTE: Besteht der Anweisungsblock aus einer einzigen Anweisung, so k�nnen
 die geschweiften Klammern entfallen.

 Die Bedingung in den Klammern enth�lt in der Regel einen Vergleichsausdruck.
 Wenn der Vergleich den Wert 0 liefert, entspricht das dem booleschen Wert
 FALSE. Der Vergleich ist also "unwahr" und der Anweisungsblock wird �ber-
 sprungen. Ergibt sich ein Wert ungleich 0 (entsprechend dem booleschen Wert
 TRUE), ist der Vergleich "wahr" und der Anweisungsblock wird ausgef�hrt.
 Eine �bersicht �ber die Vergleichsoperatoren zeigt die Tabelle unten!

 Oftmals soll ein Programm bei erf�llter Bedingung (TRUE) den einen Zweig
 durchlaufen und bei nicht erf�llter Bedingung (FALSE) einen anderen.
 Hilfreich ist hier die else-Anweisung als Erg�nzung der if-Anweisung.
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

	Operator				Symbol	Beispiel		R�ckgabewert
	------------------------------------------------------------
	Gleich					==			100==50;	false

	Ungleich				!=			100!=50;	true

	Gr��er als				>			100>50;		true
	
	Gr��er als oder         >=			50>=50;		true
	gleich

	Kleiner als				<			100<50;		false

	Kleiner als oder		<=			100<=50;	false
	gleich


	AUFGABEN:

	a) Notieren Sie in der Tabelle oben f�r jede Vergleichsart den R�ckgabe-
	wert (TRUE oder FALSE).

	b) Erweitern Sie Ihr Programm zur Umrechnung der Temperaturma�einheiten 
    dahingehend, da� anstelle der Berechnung eine Fehlermeldung	erfolgt, 
    wenn die eingegebene Temperatur im unerlaubten Bereich (kleiner als -273.15) 
    liegt.

	c) Schreiben Sie ein Programm, das einen Preis und einen Mengenwert ein-
	liest. Das Produkt aus Preis und Menge ergibt den Umsatz.
	Ist der errechnete Umsatzwert gr��er oder gleich 1000, soll die Bild-
	schirmausgabe in TEURO, andernfalls in EUR erfolgen.

*/
}
