#include <iostream>
#include <clocale>
#include <Windows.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	SetConsoleCP(1251);//для ввода на русском
	SetConsoleOutputCP(1251);
	string name;
	char st[500]; 
	//setlocale(LC_ALL, "rus");// для вывода на русском
	cout<<"Введите Ваше Имя"<<endl;
	cin>>name;
	cout<<"Привет, "<<name<<endl;
	cout<<"Введите Строку: ";
	gets(st);// аналог cin для строк
	cout<<st<<endl;
	cin.get();
	
	return 0;
}
