#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	unsigned short int einzelnote[30];
	unsigned short int note[6]={0,0,0,0,0,0};
	unsigned int notensumme=0;
	unsigned short i=0;

	cout << "NOTENEINGABE\n\n";
	cout << "Eingabe nummerisch 1...6, 0 fuer Ende\n\n";
	
	//
	do{
		i++;
		cout << i << ". Note :\t";
		cin >> einzelnote[i-1];	
		notensumme++;
	}while(einzelnote[i-1]>0 && i<30);
	
	
	for(int b=0; b<notensumme; b++){
		i=0;
		while(i<6){
			if(einzelnote[b] == i+1){
				note[i] += 1;
			}
			i++;	
		}
	}
	
	i=0;
	
	while(i<6){
		cout << endl << "Note " << i+1 << ":\t" << note[i] << "x";
		i++;
	}
	
   return 0;
}
