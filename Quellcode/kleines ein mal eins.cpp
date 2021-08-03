#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int firstNumbr = 1, secondNumbr = 0, ergebnis, b = 10;
float durchschnittNumbr;

int main(){
	for(int i=0; i<100; i++){
		if (secondNumbr == 10){
			firstNumbr++;
			secondNumbr = 0;
		}

		ergebnis = firstNumbr * (++secondNumbr);

		cout << firstNumbr << "*" << secondNumbr << "=" << ergebnis << "\n";
	}
	return 0;
}
