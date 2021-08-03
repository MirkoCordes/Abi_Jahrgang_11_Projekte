/* Schreibe ein Programm, das für eine Geradengleichung y=mx+b den Funktions-
   wert y in einer Funktion berechnet. Überlege dazu, welche "Informationen"
   an die Funktion übergeben werden müssen und folglich vorher per Tastatur
   einzulesen sind.
   
   a) Schreibe dazu eine Funktion berechne_y_1, die den errechneten 
      Funktionswert in der Funktion ausgibt.
      
   b) Schreibe eine zweite Funktion berechne_y_2, die den errechneten 
      Funktionswert in main ausgibt.  
*/

#include <iostream>

using namespace std;

void berechne_y_1(int x, int b, int m){
	float y;
	
	y = m*x+b ;
	cout << "f(" << x << ") = " << m << "*" << x << "+" << b << " = " << y;
}

int berechne_y_2(int x, int b, int m){
	int y;
	y = m*x+b;
	return y;
}


int main(void) {
  unsigned int x, b, m;
  cout << "Geradengleichung\n\n";
  
  cout << "Gib die Steigung an (m):\t\t";
  cin >> m;
  cout << "Gib den Y-Achsenabschnitt an (b):\t";
  cin >> b;
  cout << "Wie lautet \"x\"?\t\t\t\t";
  cin >> x;
  
  berechne_y_1(x, b, m);
  
  cout << "\nf(" << x << ") = " << m << "*" << x << "+" << b << " = " << berechne_y_2(x, b, m);

  return 0;
}
