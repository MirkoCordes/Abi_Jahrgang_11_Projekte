
/*----------------------------------------------------------------------------
 AUFGABE: Die nachfolgenden Programmteile f�hren jeweils Divisionen mit unter-
 schiedlichen Datentypen durch.
 Arbeiten Sie Kapitel 9.2 und 9.6 des Unterrichtsskripts gr�ndlich durch, und
 ermitteln Sie (durch messerscharfes Nachdenken) VOR dem Compilieren und Ausf�hren
 dieses Quellcodes, welche Ausgaben die cout-Anweisungen vermutlich haben
 werden. Notieren Sie ggf. auch die auftretenden Typkonvertierungen. �berpr�fen
 Sie Ihre Annahmen.
 -----------------------------------------------------------------------------*/

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int z1=21, n1=4, quotient1;
	float z2=21.0, n2=4.0, quotient2;

	// Division zweier Integer-Variablen
	quotient1=z1/n1;
	cout << "int=int/int     -->  Ergebnis: " << quotient1;  // Zahl wird gek�rzt
	cout << endl;                                            // .................

	// Und auch:
	quotient1=z1/n2;
	cout << "int=int/float   -->  Ergebnis: " << quotient1;  // Zahl wird gek�rzt
	cout << endl;                                            // .................

	// Aber:
	quotient2=z1/n2;
	cout << "float=int/float -->  Ergebnis: " << quotient2;  // .................
	cout << endl;                                            // .................

	// Und auch:
	quotient2=z2/n1;
	cout << "float=float/int -->  Ergebnis: " << quotient2;  // .................
	cout << endl;                                            // .................

	// Zu beachten:
	cout << "21/4="  << 21/4;                        		   // .................
	cout << endl;                                            // .................

	// Aber:
	cout << "21/4.0=" << 21/4.0;                      		   // Mindestens ein Operant muss Float sein
	cout << endl;                                            // .................

	// Und auch:
	cout << "21.0/4=" << 21.0/4;                      		   // .................
	cout << endl;                                            // .................

	// Division zweier Integer-Variablen (float-Variablen nicht zul�ssig !!!)
	// mittels Modulo-Operator, Typkonvertierung nicht m�glich
	quotient1=z1%n1;
	cout << "int=int%int     -->  Ergebnis: " << quotient1;  // M�ssen Int Variablen sein

   getch();
   return 0;
}
