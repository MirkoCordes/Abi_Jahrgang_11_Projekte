#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class Wuerfel{
	private:
		unsigned int augenzahl;
	
	public:
		void wuerfeln(){
			augenzahl = rand()%6+1;
		}
		
		void wuerfelAusgeben(){
			wuerfeln();
			
			//erstellt oberen Rand
			
			cout << " ";
			for(int i= 0; i<=19;i++){
				cout << "_";
			}
			cout << "\n/";
			for(int i= 0; i<=18;i++){
				cout << " ";
			}
			cout << "/|";
			cout << "\n";
			
			
			cout << char(201);
			for(int i=1; i<=18; i++){
				cout << char(205);
			}
			cout << char(187) << " |" << endl;
			
			//erstellt innenfläche
			for(int i=1; i<=7;i++){
				cout << char(186); 					//erstellt Rahmen
					for(int b=1; b<=18; b++){
						if(augenzahl == 1){
							if(i==4 && b==9){		//erstellt augenzahlen
								cout << augenzahl;
							} else {
								cout << " ";
							}	
						}
						
						else if(augenzahl == 2){
							if(i==2 && b==4 || i==6 && b==14){		//erstellt augenzahlen
								cout << augenzahl;
							} else {
								cout << " ";
							}	
						}
						
						else if(augenzahl == 3){
							if(i==2 && b==4 || i==6 && b==14 || i==4 && b==9){		//erstellt augenzahlen
								cout << augenzahl;
							} else {
								cout << " ";
							}	
						}
						
						else if(augenzahl == 4){
							if(i==2 && (b==4 || b==14) || i==6 && (b==4 || b==14)){		//erstellt augenzahlen
								cout << augenzahl;
							} else {
								cout << " ";
							}	
						}
						
						else if(augenzahl == 5){
							if(i==2 && (b==4 || b==14) || i==6 && (b==4 || b==14) || i==4 && b==9){		//erstellt augenzahlen
								cout << augenzahl;
							} else {
								cout << " ";
							}	
						}
						
						else if(augenzahl == 6){
							if(i==2 && (b==4 || b==14) || i==4 && (b==4 || b==14) || i==6 && (b==4 || b==14)){		//erstellt augenzahlen
								cout << augenzahl;
							} else {
								cout << " ";
							}	
						}
						
						if(b==18){				//erstellt Rahmen
							cout << char(186);
						}
						if(b==18 && i<7){
							cout << " |";
						}
						if(i==7 && b==18){
							cout << "/";
						}
					}
				
				cout << "\n";
			}
			//erstellt unteren Rand
			cout << char(200);
			for(int i=1; i<=18; i++){
				cout << char(205);
			}
			cout << char(188) << endl;
			
		}
		
};

int main(){
	Wuerfel wuerfel1;
	char eingabe;
	
	srand((unsigned) time(0));
	cout << "-----------Der W" << char(129) << "rfel-----------\n";
	
	do{
		cout << "W" << char(129) << "rfeln?\n (Y)es | (N)o: \t";
		cin >> eingabe;
		system("cls");
		cout << "-----------Der W" << char(129) << "rfel-----------\n";
		switch(toupper(eingabe)){
			case 'Y': wuerfel1.wuerfelAusgeben(); break;
			case 'N': cout << "Programm wird beendet!"; break;
		}	
	}while(toupper(eingabe) != 'N');
	
	
	
}
