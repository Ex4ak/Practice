#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	/*int *ptrnum = new int;
	*ptrnum = 7;
	cout<<*ptrnum<<endl;//выписываетс€ значение в €чейке
	delete ptrnum;//освобождаетс€ пам€ть по адресу €чейки
	*/
	float *ptrarray = new float [10];
	for (int i = 0; i<10; i++)
		ptrarray[i] = rand ()%80 + 1;
	for (int i = 0; i<10; i++)
		cout<<ptrarray[i]<<endl;
	delete [] ptrarray;
	return 0;
}
