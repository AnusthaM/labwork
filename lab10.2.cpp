#include<iostream>
using namespace std;
#include<conio.h>
class student{
	protected:
		char name[100];
		int roll;
	public:
		void input(){
			cout<<"ENTER THE NAME AND ROLL NUMBER:"<<endl;
			cin>>name>>roll;
		}
		void output(){
			cout<<"NAME: "<<name<<endl<<"ROLL NO: "<<roll<<endl;
		}
};
class test:public student{
	protected:
		float sub1,sub2;
	public:
		void input(){
			cout<<"ENTER THE MARKS IN TWO SUBJECTS:"<<endl;
			cin>>sub1>>sub2;
		}
		void output(){
			cout<<"MARKS IN ONE SUBJECT: "<<sub1<<endl<<"MARKS IN ANOTHER SUBJECT: "<<sub2<<endl;
		}
};
class sports{
	protected:
		int score;
	public:
		void input(){
			cout<<"ENTER THE SCORE:"<<endl;
			cin>>score;
		}
		void output(){
			cout<<"SCORE: "<<score<<endl;
		}
};
class result:public test,public sports{
		float total;
	public:
		void output(){
			total=sub1+sub2+score;
			cout<<"TOTAL: "<<total<<endl;
		}
};
int main(){
	result r;
	r.student::input();
	r.test::input();
	r.sports::input();
	r.student::output();
	r.test::output();
	r.sports::output();
	r.output();
}

