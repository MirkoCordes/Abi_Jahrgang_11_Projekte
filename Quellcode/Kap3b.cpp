
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   float a, r=9.9;  
   const float PI = 9.14;      
 

   a = PI * r * r;
   cout << "\nDie Flaeche des Kreises betraegt bei einem Radius von "
        << r << " cm : " << a  << " cm\xFD" << "\n\n"; 
                                            
   cout << "Programmende mit beliebiger Taste ...";
   getch();
   return 0;





/* AUFGABEN:
   a) Erweitere das Programm dahingehend, dass auch der Umfang des Kreises
   berechnet und ausgegeben wird.
   
   b) Überlege, wie in den Ausgaben "Flaeche" und "betraegt" der Umlaut korrekt
   dargestellt werden kann. Ändere das Programm entsprechend ab!
   
   c) Ändere das Programm dahingehend ab, dass der Radius nicht mehr fest in den
   Quellcode "eingebrannt" ist, sondern per Tastatur eingelesen wird.
*/
}
