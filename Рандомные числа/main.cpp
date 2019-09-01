#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"1 random number= "<< 1 + rand()%80<<endl;
	cout<<"2 random number= "<< 1 + rand()%80<<endl;
	cout<<"3 random number= "<< 1 + rand()%80<<endl;
	
	string name;
	cout <<"Enter your name"<<endl;
	getline(cin, name);
	if (name.length() !=0)
	cout<<"Your name is "<<name;
	else 
	cout<<"Error";
	cin.get();
	return 0;
}
