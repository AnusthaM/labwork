#include<iostream>
using namespace std;
#include<conio.h>
class Media{
	protected: 
	char title[50];
	float price;
	public:
		void input(){
			cout<<"Enter the title and price:"<<endl;
			cin>>title>>price;	
		}
		void display(){
			cout<<"TITLE:"<<title<<endl<<"PRICE"<<price<<endl;
		}
};
class Book:public Media{
	int no;
	public:
			void input(){
			cout<<"Enter the number of pages:"<<endl;
			cin>>no;	
		}
		void display(){
			cout<<"NO OF PAGES:"<<no<<endl;
		}
};
class Video_Tape:public Media{
	float play_time;
	public:
			void input(){
			cout<<"Enter the playtime:"<<endl;
			cin>>play_time;	
		}
		void display(){
			cout<<"PLAY TIME:"<<play_time<<endl;
		}
};
int main(){
	Book b1;
 Video_Tape v1;
 cout<<"For BOOK:"<<endl;
 b1.Media::input();
 b1.input();
 b1.Media::display();
 b1.display();
 cout<<"For Video tape:"<<endl;
 v1.Media::input();
 v1.input();
 v1.Media::display();
 v1.display();
 return 0;
 getch();

}



