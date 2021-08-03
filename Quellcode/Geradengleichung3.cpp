/* Schreibe ein Programm, das für eine Geradengleichung y=mx+b den Funktions-
   wert y für x = 0...10 in einer Funktion berechne_y berechnet und ausgibt. 
   Überlege, welche "Informationen" an die Funktion übergeben werden 
   müssen und folglich vorher per Tastatur einzulesen sind.
   
   Bonusaufgabe: Zeichne den Graph der Funktion in der Form 
   
   y 
   12                     x
   11                   x
   10                 x
    9               x
    8             x
    7           x
    6         x
    5       x
    4     x
    3   x
    2 x
    1
    0
      0 1 2 3 4 5 6 7 8 9 10  x
*/

#include <iostream>
using namespace std;
int yArray[2][10];

float berechne_y_hoechste(int m, int b){
	float yH;
	
	yH = m*10+b;
	
	return yH;
}

void xLeisteBennenen(){
	for(int i=0; i<10; i++){
		yArray[0][i] = i+1;
	}
}

float berechne_y_ganz(int m, int b){
	float ergebnis = 0;
	for(int i=0; i<10; i++){
		ergebnis = m*(i+1)+b;
		yArray[1][i] = ergebnis;
	}
	
	return yArray[2][10];
}

void diagrammAusgeben(){
	cout << Y << endl;
	
	for(int i=yArray[1][9]; i>=0; i--){
		cout << yArray[1][9];
		for (int b=10; b>=0; b--){
			cout << " ";
		}
		
		cout << "x" << endl;
	}
}

int main() {
  unsigned int b, m;
  

  cout << "Geradengleichung\n\n";

  cout << "Gib die Steigung an (m):\t\t";
  cin >> m;
  cout << "Gib den Y-Achsenabschnitt an (b):\t";
  cin >> b;
  
  xLeisteBennenen();
  yArray[1][9] = berechne_y_hoechste(m, b);
  berechne_y_ganz(m, b);
  
  for(int i=0; i<10; i++){
  		cout << i+1 << ". " << yArray[1][i] << endl;
	}
	
	diagrammAusgeben();
  

  return 0;
}
