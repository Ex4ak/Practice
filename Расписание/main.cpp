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
				cout<<"������� ���������� ������"<<endl;
				cin>>kafedranum;
				for(int i=1;i<=kafedranum;i++)
				{
					cout<<"������� �������� �������"<<endl;
					cin>>kafedraname;
					cout<<"������� ���������� ���������"<<endl;
					cin>>auditorycout;
					for(int j=1;j<=auditorycout;j++){
						cout<<"������� ����� ���������"<<endl;
						cin>>auditorynum;
						cout<<"������� ���������� ����"<<endl;
			cin>>audmest;
					}
				}
			}
};

class prepod
{
	private:
	string name, lesson; //����� ������� �������������, ����������, � ����� ��������� �� ���������
	int audnum, prepodnum;
	
	public:
		void setprepod()
		{
			cout<<"������� ���������� ��������������: "<< endl;
			cin>>prepodnum;
			for (int i=1; i<=prepodnum; i++){
			cout<<"������� ������� �������������: "<<endl;
			cin>>name;
			cout<<"������� �������, ������� ��������� �������������: "<<endl;
			cin>>lesson;
			cout<<"������� ����� ���������, � ������� ��������� �������������: "<< endl;
			cin>>audnum;
		}
		FILE *f;
		f=fopen("Raspisanie.txt","w");
		ofstream fout("Raspisanie.txt");
		fout<<"������� �������������: "<<name<<endl;
		fout<<"�������: "<<lesson<<endl;
		fout<<"���������: "<<audnum<<endl;
		fclose(f);
		}
};
class group{
	private:
		string grname, stname;
		int grnum, stnum, stnumgr;
		
	public:
	void setgroup()
	{cout<<"������� ���������� �����: "<<endl;
	cin>>grnum;
	cout<<"������� ���������� ���������: "<<endl;
	cin>>stnum;
	for (int i=1; i<=grnum;i++){
	cout<<"������� �������� ������: "<<endl;
	cin>>grname;
	cout<<"������� ���������� ��������� � ������: "<<endl;
		cin>>stnumgr;
	for (int j=0;j<=stnum;j++){
		if(stnum>stnumgr){
		
		cout<<"������� ��� ��������: "<<endl;
		cin>>stname;
		stnum=stnum - stnumgr;}
	}
	}
	FILE *f;
		f=fopen("Raspisanie.txt","w");
		ofstream fout("Raspisanie.txt");
		fout<<"���������� �����: "<<grnum<<endl;
		fout<<"���������� ���������: "<<stnum<<endl;
		fout<<"�������� ������: "<<grname<<endl;
		fout<<"���������� ��������� � ������: "<<stnumgr<<endl;
		fout<<"��� ��������: "<<stname<<endl;
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
