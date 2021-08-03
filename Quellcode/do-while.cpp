#include <iostream>
#include <stdlib.h>

using namespace std;
double i = -0.01;

int main(){
	
	do{
		i+=0.01;
		cout << i << "\n";
	}while(i < 1);
	return 0;
}
