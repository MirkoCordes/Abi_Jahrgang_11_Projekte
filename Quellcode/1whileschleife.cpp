#include <iostream>
#include <stdlib.h>

using namespace std;
double i = -0.01;

int main(){
	while(i <=1){
		i+=0.01;
		cout << i << "\n";
	}	
	return 0;
}
