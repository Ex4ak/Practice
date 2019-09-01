#include <iostream>
#include <cmath>
//#include <stdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale (LC_ALL, "rus");
	int a1, a2, flag; 
	cout<<"Введите диапазон чисел"<<endl;
	cout<<"Левый предел "<<endl;
	cin>>a1;
	cout<<"Правый предел "<<endl;
	cin>>a2;
	for (int i = a1;i <= a2;i++){
		flag = 0; //для каждого числа обнуляется, и является показателеп простого числа
		for (int j = i; j > 0; j--) { //перебор всех чисел ниже проверяемого числа
			if (i % j == 0) { //на какие числа делится проверяемое число без остатка
				flag++;//flag - количество чисел на которое проверяемое число делится без остатка
			}
		}
		if (flag == 2 | flag == 1) {
			cout<< i <<" простое число"<<endl; //если flag = 2, то чило простое
		}
	}
	
	return 0;
}
