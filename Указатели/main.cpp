#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	const float pi = 3.14; // ��������� ������ ��������
	
	int value = 8;
	int &ref = value;//������ ��������� �� ���, ��������� ��������� �� �����
	cin>>ref;
	cout<<value<<endl;
	/*int *ptrvalue = &value;
	int **ptr_ptrvalue = &ptrvalue;
	cin>>**ptr_ptrvalue;
	cout<<value<<"-"<<ptrvalue<<endl;*///������� �������� � ����� � ����� ���������, ������� ��������� ������ �����
	
	
	return 0;
}
