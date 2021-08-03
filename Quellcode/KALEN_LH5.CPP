#include <iostream>   // cin, cout
#include <conio.h>      // clrscr
#include <ctype.h>      // toupper
using namespace std;

/********************** GLOBALE VARIABLEN UND KONSTANTEN **********************/
unsigned short tag, monat, jahr;
const unsigned short ersterJanuar = 1, startjahr=1;  // 1.1.1 ist ein Montag

/********************** DEKLARATION DER FUNKTIONEN ****************************/
unsigned short schaltjahr (unsigned short jahr);
unsigned short tagXimJahr (void);
unsigned int tagX_Berechnung(void);
unsigned short wochentag_Berechnung (void);
void ausgabe (unsigned short wochentag);

int main() {
  unsigned short wochentag;
  char ende;

  do {
	  system("CLS");
	  cout << "KALENDER-PROGRAMM\n\n";
	  cout << "Dieses kleine Programm rechnet eine numerische Datumseingabe\n";
	  cout << "in einen Wochentag um. Es sind Datumseingaben ab dem 1.1.1\n";
	  cout << "bis in die fernste Zukunft moeglich!\n\n";
	  cout << "Bitte den Tag eingeben:   ";
	  cin >> tag;
	  cout << "Bitte den Monat eingeben: ";
	  cin >> monat;
	  cout << "Bitte das Jahr eingeben:  ";
	  cin >> jahr;

	  wochentag = wochentag_Berechnung();
	  ausgabe(wochentag);

	  cout << "\n\nProgramm beenden (j/n)? ";
	  cin >> ende;
	  ende = toupper(ende);
	  } while (ende == 'N');
  return 0;
}  // Ende der main-Funktion


/*********************** DEFINITION DER FUNKTIONEN ****************************/

/******************************************************************************/
/* FUNKTION:   wochentag_Berechnung                                           */
/* Aufruf in:  main                                                           */
/* Parameter:  /                                                              */
/* Rückgabe:   wochentag (unsigned short)                                     */
/* Beschreibg: rechnet den Tag bzgl. des 1.Januars des Jahres XXXX um in      */
/*             einen Wochentag (1=Montag, 2=Dienstag ...)                     */
/******************************************************************************/
unsigned short wochentag_Berechnung (void) 
{
  unsigned int tagX, wochentag;

  tagX = tagX_Berechnung();
  
  // einfache Lösung zu "Fuß" mit for-Schleife, 
  // geht aber auch eleganter!!! Elegantere Lösung?
  wochentag = ersterJanuar;
  for (unsigned int i=1; i < tagX; i++)
  {
	 wochentag++;
	 if (wochentag == 8) wochentag = 1;  // 8 wäre wieder ein Montag, deshalb
  }                                      // hier ein Zurücksetzen auf 1

  return (wochentag);
}


/******************************************************************************/
/* FUNKTION:   tagX_Berechnung                                                */
/* Aufruf in:  wochentag_Berechnung                                           */
/* Parameter:  /                                                              */
/* Rückgabe:   tagX (unsigned int)                                                 */
/* Beschreibg: berechnet die Anzahl verstrichener Tage bzgl. des 1.Januars    */
/*             eines vorgegebenen Jahres (globale Konstante "startjahr")      */
/******************************************************************************/
unsigned int tagX_Berechnung(void)
{
  unsigned int i, tagX;

  // Berechnung der Tage der vollen Jahre:

  // Berechnung der Tage inklusiv der Tage des aktuellen Jahres:


  return(tagX);
}


/******************************************************************************/
/* FUNKTION:   schaltjahr                                                     */
/* Aufruf in:  main                                                           */
/* Parameter:  jahr aus main                                                  */
/* Rückgabe:   0 für kein Schaltjahr, 1 für Schaltjahr                        */
/* Beschreibg:                                                                */
/******************************************************************************/
unsigned short schaltjahr (unsigned short jahr)
{
	if (jahr%4 == 0)			  // durch 4 teilbar
		if (jahr%100 == 0)        // durch 100 teilbar
			if (jahr%400 == 0)    // durch 100 und durch 400 teilbar
				return 1;
			else               	  // durch 100 aber nicht durch 400 teilbar
				return 0;
		else              	      // durch 4 aber nicht durch 100 teilbar
			return 1;
	else
		return 0;				  // nicht durch 4 teilbar
}


/******************************************************************************/
/* FUNKTION:   tagXimJahr                                                     */
/* Aufruf in:  tagX_Berechnung                                                */
/* Parameter:  /                                                              */
/* Rückgabe:   tagImJahr (unsigned short)                                            */
/* Beschreibg: berechnet den Tag im aktuellen Jahr                            */
/******************************************************************************/
unsigned short tagXimJahr (void)
{
  unsigned short tagImJahr;
  switch (monat) {
	  case 1:  tagImJahr = 31;    break;
	  case 2:  tagImJahr = 28;   break;
	  case 3:  tagImJahr = 31;   break;
	  case 4:  tagImJahr = 30;   break;
	  case 5:  tagImJahr = 31;  break;
	  case 6:  tagImJahr = 30;  break;
	  case 7:  tagImJahr = 31;  break;
	  case 8:  tagImJahr = 31;  break;
	  case 9:  tagImJahr = 30;  break;
	  case 10: tagImJahr = 31;  break;
	  case 11: tagImJahr = 30;  break;
	  case 12: tagImJahr = 31;
  }
  
  // ab März noch einen Tag hinzurechnen, falls das Jahr ein Schaltjahr ist:

  // die Tage des aktuellen Monats hinzurechnen:  

  return (tagImJahr);
}


/******************************************************************************/
/* FUNKTION:   ausgabe                                                        */
/* Aufruf in:  main                                                           */
/* Parameter:  wochentag (unsigned short)                                     */
/* Rückgabe:   /                                                              */
/* Beschreibg: wandelt den errechneten numerischen Wochentag in einen String  */
/*             um und gibt den String aus                                     */
/******************************************************************************/
void ausgabe (unsigned short wochentag)
{
  cout << "\nDer " << tag << "." << monat << "." << jahr << " faellt auf einen ";
  switch (wochentag)
	{
	  case 1: cout << "Montag!";     break;
	  case 2: cout << "Dienstag!";   break;
	  case 3: cout << "Mittwoch!";   break;
	  case 4: cout << "Donnerstag!"; break;
	  case 5: cout << "Freitag!";    break;
	  case 6: cout << "Samstag!";    break;
	  case 7: cout << "Sonntag!";
	  default: cout << "Programmfehler!";
	}
}


