#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstddef>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class kafedra{
	private:
		string kafedraname;
		int kafedranum,auditorycout,auditorynum,audmest ;
		public:
			void setkafedra(){
				cout<<"Введите количество кафедр"<<endl;
				cin>>kafedranum;
				for(int i=1;i<=kafedranum;i++)
				{
					cout<<"Введите название кафедры"<<endl;
					cin>>kafedraname;
					cout<<"Введите количество аудиторий"<<endl;
					cin>>auditorycout;
					for(int j=1;j<=auditorycout;j++){
						cout<<"Введите номер аудитории"<<endl;
						cin>>auditorynum;
						cout<<"Введите количество мест"<<endl;
			cin>>audmest;
					}
				}
			}
};

class prepod
{
	private:
	string name, lesson; //Пишем фамилию преподавателя, дисциплину, в какой аудитории он преподает
	int audnum, prepodnum;
	
	public:
		void setprepod()
		{
			cout<<"Введите количество преподавателей: "<< endl;
			cin>>prepodnum;
			for (int i=1; i<=prepodnum; i++){
			cout<<"Введите фамилию преподавателя: "<<endl;
			cin>>name;
			cout<<"Введите предмет, который преподает преподаватель: "<<endl;
			cin>>lesson;
			cout<<"Введите номер аудитории, в которой преподает преподаватель: "<< endl;
			cin>>audnum;
		}
		FILE *f;
		f=fopen("Raspisanie.txt","w");
		ofstream fout("Raspisanie.txt");
		fout<<"Фамилия преподавателя: "<<name<<endl;
		fout<<"Предмет: "<<lesson<<endl;
		fout<<"Аудитория: "<<audnum<<endl;
		fclose(f);
		}
};
class group{
	private:
		string grname, stname;
		int grnum, stnum, stnumgr;
		
	public:
	void setgroup()
	{cout<<"Введите количество групп: "<<endl;
	cin>>grnum;
	cout<<"Введите количество студентов: "<<endl;
	cin>>stnum;
	for (int i=1; i<=grnum;i++){
	cout<<"Введите название группы: "<<endl;
	cin>>grname;
	cout<<"Введите количество студентов в группе: "<<endl;
		cin>>stnumgr;
	for (int j=0;j<=stnum;j++){
		if(stnum>stnumgr){
		
		cout<<"Введите имя студента: "<<endl;
		cin>>stname;
		stnum=stnum - stnumgr;}
	}
	}
	FILE *f;
		f=fopen("Raspisanie.txt","w");
		ofstream fout("Raspisanie.txt");
		fout<<"Количество групп: "<<grnum<<endl;
		fout<<"Количество студентов: "<<stnum<<endl;
		fout<<"Название группы: "<<grname<<endl;
		fout<<"Количество студентов в группе: "<<stnumgr<<endl;
		fout<<"Имя студента: "<<stname<<endl;
		fclose(f);
		}	
};



int main(int argc, char** argv) {
setlocale (LC_ALL, "rus");
kafedra kafedra1;
kafedra1.setkafedra();
prepod prepod1;
prepod1.setprepod();
group group1;
group1.setgroup();


return 0;
}
