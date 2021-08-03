#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int firstNumbr = 1, secondNumbr = 0, ergebnis, b = 10;
float durchschnittNumbr;

int main(){
	for(int i=1; i<=10; i++){
		for (int b=1; b<=10; b++){
			cout << i << "*" << b << "=" << i*b << "\t\t";
		}
	}
	return 0;
}
