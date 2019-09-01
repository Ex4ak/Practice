#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Tree{
	string name;
	int age;
};
struct Date{
	int year;
};
struct Auto{
	int wheels;
	float speed;
	char color;
	Date sozdanie;
};


int main(int argc, char** argv) {
	Auto shkoda;
	shkoda.color = 'r';
	shkoda.wheels = 4;
	shkoda.speed = 90.25;
	shkoda.sozdanie.year  = 2001;
	Auto audi;
	audi.color = 'b';
	audi.speed = 112.31;
	audi.wheels = 4;
	Auto merc = {4, 100.5, 'w'};
	cout <<"Audi speed: "<<audi.speed <<"\n"<<"Year of creation: "<< shkoda.sozdanie.year <<"\n"<<"Merc speed: "<<merc.speed <<endl;
	
	Tree first;
	first.name ="Bereza";
	first.age = 21;
	
	Tree second;
	second.name = "Dub";
	second.age = 38;
	cout<<"Tree name: "<<first.name<<"\n"<<first.name<<" age: "<<first.age <<endl; 
	
	return 0;
}
