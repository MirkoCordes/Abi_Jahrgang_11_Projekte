/* Schreibe Fkt_Geradengleichung1.cpp so um, dass der Wert von x wiederholt in einer 
   Schleife abgefragt wird, der Funktionswert y mittels Funktion berechnet und
   ausgegeben wird. 
   Überlege, welche Schleife hier am besten geeignet ist und wie man das
   Programm beenden könnte.
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
  
  do{
  	cout << "\n--------------------------------\nWie lautet \"x\"?\t\t\t\t";
  	cin >> x;
  	berechne_y_1(x, b, m);
  	cout << "\nf(" << x << ") = " << m << "*" << x << "+" << b << " = " << berechne_y_2(x, b, m);
  }while(x>=0);
  
  
  

  return 0;
}
