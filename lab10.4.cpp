#include<iostream>
using namespace std;
#include<conio.h>
class university{
	protected:
		char name[100];
		char location[100];
	public:
		void input(){
			cout<<"ENTER THE NAME AND LOCATION:"<<endl;
			cin>>name>>location;
		}
		void output(){
			cout<<"NAME: "<<name<<endl<<"LOCATION: "<<location<<endl;
		}
};
class aff_college:public virtual university{
	protected:
		char name[50];
	public:
		void input(){
			cout<<"ENTER THE NAME OF AFFLIATED COLLEGE:"<<endl;
			cin>>name;
		}
		void output(){
			cout<<"AFFLIATED COLLEGE: "<<name<<endl;
		}
};
class con_college:public virtual university{
	protected:
		char name[50],dean[50];
	public:
		void input(){
			cout<<"ENTER THE NAME OF CONSTIEUNT COLLEGE AND DEAN:"<<endl;
			cin>>name>>dean;
		}
		void output(){
			cout<<"CONSTIEUNT COLLEGE: "<<name<<endl<<"DEAN: "<<dean<<endl;
		}
};
class student: public aff_college,public con_college{
		char department;
	public:
		void input(){
			cout<<"ENTER THE DEPARTMENT:"<<endl;
			cin>>department;
		}
		void output(){
			cout<<"DEPARTMENT: "<<department<<endl;
		}
};
int main(){
	student s;
	s.university::input();
	s.aff_college::input();
 	s.con_college::input();
 	s.input();
 	s.university::output();
 	s.aff_college::output();
 	s.con_college::output();
 	s.output();
 	return 0;
 	getch();

}
