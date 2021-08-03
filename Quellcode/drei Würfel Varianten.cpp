#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int firstNumbr = 1, secondNumbr = 0, ergebnis, b = 10;
float durchschnittNumbr;

int main(){
	for(int i=1; i<=6; i++){
		for (int b=1; b<=6; b++){
			for (int c=1; c<=6; c++){
				cout << i << "+" << b << "+" << c << "=" << i+b+c << "\n";
			}
		}
	}
	return 0;
}
