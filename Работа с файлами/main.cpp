#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char text[50];
	ofstream tfile;//записать данные в файл
	tfile.open("text2.txt");// если не сущ, то создается автоматически
	cout<<"Работа с файлами C++ \n";
	tfile <<"Работа с файлами C++ \n";
	tfile.close(); 
	
	ifstream file("text.txt");
	if (!file.is_open() )
		cout<<"Ошибка! Файл не найден \n";
	else{
		file>>text;
		cout<<text;
		file.getline(text, 50);
		cout<<text<<endl;
		file.close() ; 
	} 
	
	return 0;
}
