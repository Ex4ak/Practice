#include <iostream>
#include <clocale>
#include <Windows.h>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	SetConsoleCP(1251);//��� ����� �� �������
	SetConsoleOutputCP(1251);
	string name;
	char st[500]; 
	//setlocale(LC_ALL, "rus");// ��� ������ �� �������
	cout<<"������� ���� ���"<<endl;
	cin>>name;
	cout<<"������, "<<name<<endl;
	cout<<"������� ������: ";
	gets(st);// ������ cin ��� �����
	cout<<st<<endl;
	cin.get();
	
	return 0;
}
