#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int randThousand, listNumber, maxListNumbr, minListNumbr, maxNumbr = 0, minNumbr = 1000;
float durchschnittNumbr;

int main(){
	srand((unsigned) time(0));
	for(int i=0; i<100; i++){
		randThousand = rand()%1001;
		++listNumber;
		if (randThousand > maxNumbr){
			maxNumbr = randThousand;
			maxListNumbr = listNumber;
		}
		if (randThousand < minNumbr){
			minNumbr = randThousand;
			minListNumbr = listNumber;
		}
		
		durchschnittNumbr += randThousand; 
		cout << listNumber << ": \t" << randThousand << "\t\t";
	}
	
	durchschnittNumbr /= 100;
	
	cout << "\n\n--------------------------------\n max (an Stelle " << maxListNumbr << "):\t" << maxNumbr;
	cout << "\n min (an Stelle " << minListNumbr << "):\t" << minNumbr;
	cout << "\n Durchschnitt: \t\t" << durchschnittNumbr;

	return 0;
}
