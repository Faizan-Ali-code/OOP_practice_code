#include<iostream>
using namespace std;


class Birthday{
	
	private:
		int day;
		int month;
		int year;
	public:
		Birthday(int d=0,int m=0, int y=0){
			cout<<" Birthday class's constructor called "<<endl;
			day=d;
			month=m;
			year=y;
		}
		
		void setBirthday(int d=0,int m=0, int y=0){
			day=d;
			month=m;
			year=y;
		}
		
		void displayBirthday(){
		 cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
		~ Birthday(){
			cout<<" Birthday class's destructor called "<<endl;
		}
};

class People{
	private:
		string name;
		Birthday obj;
	public:
		
		 People(string n="",int d=0,int m=0, int y=0){
		 	cout<<" people class's constructor called "<<endl;
	        	name=n;
	        	obj.setBirthday(d,m,y);
		}
		
//	        void set_People_Birthday(string n="",int d=0,int m=0, int y=0){
//	        	name=n;
//			obj.setBirthday(d,m,y);
//		}
		
			void display_People_Birthday(){
		   cout<<" Name : "<<name<<endl;
		   obj.displayBirthday();
		}
		
		~People(){
			cout<<" people class's destructor called "<<endl;
		}
		
		
};

int main(){
	People p("Faizan Ali",28,11,2000);
	p.display_People_Birthday();
	
	return 0;
}
