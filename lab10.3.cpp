#include<iostream>
using namespace std;
#include<conio.h>
class person{
	protected:
		char name[100];
		int code;
	public:
		void input(){
			cout<<"ENTER THE NAME AND CODE:"<<endl;
			cin>>name>>code;
		}
		void output(){
			cout<<"NAME: "<<name<<endl<<"CODE: "<<code<<endl;
		}
};
class account:public virtual person{
	protected:
		float salary;
	public:
		void input(){
			cout<<"ENTER THE SALARY:"<<endl;
			cin>>salary;
		}
		void output(){
			cout<<"SALARY: "<<salary<<endl;
		}
};
class admin:public virtual person{
	protected:
		float ex;
	public:
		void input(){
			cout<<"ENTER YEARS OF EXPERIENCE:"<<endl;
			cin>>ex;
		}
		void output(){
			cout<<"YEARS OF EXPERIENCE: "<<ex<<endl;
		}
};
class record: public admin,public account{
		int num;
	public:
		void input(){
			cout<<"ENTER RECORD NUMBER:"<<endl;
			cin>>num;
		}
		void output(){
			cout<<"RECORD NUMBER: "<<num<<endl;
		}
};
int main(){
	record r;
	r.person::input();
	r.account::input();
 	r.admin::input();
 	r.input();
 	r.person::output();
 	r.account::output();
 	r.admin::output();
 	r.output();
 	return 0;
 	getch();

}
