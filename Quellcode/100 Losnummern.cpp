#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int numbr = 0;

int main(){
	for(int i=1; i<=100; i++){
		for (int b= i+1; b<=100; b++){
			for (int c= b+1; c<=100; c++){
				for(int d= c+1; d<=100; d++){
					cout << i << "\t" << b <<  "\t" << c << "\t" << d << "\n";
				}
			}
		}
	}	
	
	cout << numbr;
	return 0;
}
