#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

enum mall{parking = -1, hall, shops, roof
};



int main(int argc, char** argv) {
	
	bool exit = false;
	int floor;
	while (!exit){
		cout<<"Enter your floor(-1;2 ): ";
		cin>>floor;
		switch (floor){
			case parking:
				cout<<"You are at the -1 floor at the parking \n";
				break;			
			case hall:
				cout<<"You are at hall \n";
				break;
			case shops:
				cout<<"You are near shops \n";
				break;
			case roof:
				cout<<"You are at roof \n";
				break;
			default:
				cout<<"Wrong floor \n";
				break;				
		}
		cout<<"If You want to change floor, press 0, if You are at the right floor, press 1 \n";
		cin >>exit;
	}
	
	cin.get();
	return 0;
}
