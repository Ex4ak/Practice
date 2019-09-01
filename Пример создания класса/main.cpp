//Ввести количество групп на курсе; Название групп; Список студентов
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>
//#include <iomanip.h>
//#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class group
{
	private:
		int countofgroup;
		int number;  //Описываем свойства
		int code;
		int countofstudent;
		string name;
		string studentname;
		
		
	public:            //Описываем методы
	void setgroup()
	{
		cout<<"Enter count of groups"<<'\n';
		cin>>countofgroup;
		for (int i=1;i<=countofgroup;i++){
		
	cout<<"Enter name of the group  "<<'\n';
	cin>>name;
	cout<<"Enter student count"<< '\n';
	cin>>countofstudent;
	for (int j=1;j<=countofstudent;j++){
	
	cout<<"Enter student name"<<'\n';
	cin>>studentname;}
	FILE *f;
		f=fopen("Student.txt","w");
		ofstream fout("Student.txt");
		fout<<"Count of groups: "<<countofgroup<<'\n';
		fout<<"Name of the group: "<<name<<'\n';
		fout<<"Count of student: "<<countofstudent<<'\n';
		fout<<"Name of student: "<<studentname<<'\n';
		fclose(f);}
	}

	
	
	void showgroup()
	{
	
	for (int i=1; i<=countofgroup;i++){
	
		cout<<countofgroup<<endl;
		cout<<name<<endl;
		cout<<countofstudent<<endl;
		for (int j=1;j<=countofstudent;j++){
		cout<<studentname<<endl;
		}}}
};

int main(int argc, char** argv) {
	setlocale (LC_ALL,"rus");
	
	group group1;
	
	group1.setgroup();
	group1.showgroup();
	
	return 0;
	}
    
