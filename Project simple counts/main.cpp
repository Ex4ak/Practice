#include <iostream>
#include <cmath>
//#include <stdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale (LC_ALL, "rus");
	int a1, a2, flag; 
	cout<<"������� �������� �����"<<endl;
	cout<<"����� ������ "<<endl;
	cin>>a1;
	cout<<"������ ������ "<<endl;
	cin>>a2;
	for (int i = a1;i <= a2;i++){
		flag = 0; //��� ������� ����� ����������, � �������� ����������� �������� �����
		for (int j = i; j > 0; j--) { //������� ���� ����� ���� ������������ �����
			if (i % j == 0) { //�� ����� ����� ������� ����������� ����� ��� �������
				flag++;//flag - ���������� ����� �� ������� ����������� ����� ������� ��� �������
			}
		}
		if (flag == 2 | flag == 1) {
			cout<< i <<" ������� �����"<<endl; //���� flag = 2, �� ���� �������
		}
	}
	
	return 0;
}
