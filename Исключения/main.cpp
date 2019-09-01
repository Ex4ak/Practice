#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int num1;
	int num2;
	
	cout<<"Enter Num 1: ";
	cin>>num1;
	cout<<"Enter Num 2: ";
	cin>>num2;
	cout<<"Num 1 + Num 2 = "<<num1+num2<<endl;
	cout<<"Num 1 / Num 2 = ";
	try{
		if (num2==0)
			throw 123;
		cout<<num1/num2<<endl;
	}
	catch (int i){
		cout<<"Eror ¹"<<i<<" - divide by 0 !!!"<<endl;	
	}
		
		
	return 0;
}
