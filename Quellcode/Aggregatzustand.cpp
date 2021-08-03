#include <iostream>

using namespace std;
float grad;
const int 
	minGradWasser = 0, 
	maxGradWasser = 100, 
	minGradEisen = 1535,
	maxGradEisen = 2750,
	minGradAir = -219,
	maxGradAir = -183;

int main(){
	cout << "----Aggregatzustaende----\n";
	cout << "Bitte die Temperatur eingeben (in *C): ";
	cin >> grad;
	cout << "\n";
	if(grad < minGradWasser){
		cout << "Wasser ist gefroren!";
	} else if (grad >= maxGradWasser){
		cout << "Wasser ist gasfoermig!";
	} else{
		cout << "Wasser ist fluessig!";
	}
	
	cout << "\n";
	
	if(grad < minGradEisen){
		cout << "Eisen ist gefroren!";
	} else if (grad >= maxGradEisen){
		cout << "Eisen ist gasfoermig!";
	} else{
		cout << "Eisen ist fluessig!";
	}
	
	cout << "\n";
	
	if(grad < minGradAir){
		cout << "Luft ist gefroren!";
	} else if (grad >= maxGradAir){
		cout << "Luft ist gasfoermig!";
	} else{
		cout << "Luft ist fluessig!";
	}
	
	return 0;
}
