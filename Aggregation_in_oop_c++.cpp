#include<iostream>
using namespace std;




class Book{
	
	private:
	
		
		
	public:
	    string name;
		int id;
		string author;
		
		Book(string name,int id,string author){
		this ->	name=name;
		this ->	id=id;
		this ->	author=author;
		}
		
		void displayBook(){
			cout<<" Book name : "<<name<<endl;
			cout<<" Book id : "<<id<<endl;
			cout<<" Book author : "<<author<<endl;
		}
		
};


class Library{
	private:
	   string name;
	   int block;
	   char sector;
	   Book* book;
	public:
		
		Library(string name,int block,char sector,Book* bookobj){
		 this -> name = name;
		this ->	block = block;
		this ->	sector = sector;
		this ->	book  = bookobj;
		}
		
		void displayData(){
			cout<<" Library name : "<<name<<endl;
			cout<<" Library Sector & Block : "<<sector<<" - "<<block<<endl;
			cout<<" Book details : "<< book->name<<" "<<book->id<<" "<<book->author <<endl;
//			cout<<" Book details : " << bookobj -> displayBook() <<endl;
		}
};



int main(){


Book b1("winter",234,"john");
//	 b1.displayBook();



	 Library L_obj1("iqbal",2,'A',&b1);
	 L_obj1.displayData();

	 

	return 0;
}
