#include <iostream>
using namespace std;

int main()
{
	class Date{
		
		private:
			
			int day;
			int month;
			int year;
			static Date defaultDate;
			
		public:
			// constructor
			Date(int day=0,int month=0,int year=0);
			
			//destructor
			~Date();
			
		    int	getDay();
			int getMonth();
			int getYear();
			
			setDay(int x);
			setMonth(int x);
			setYear(int x);
			
			addDay();
			addMonth();
			addYear();
			
			static setDefaultDate();
			
	};
	
	//definition of setter of class date
	
	int Date::getDay() const{
		return day;
	}
	
	int Date::getMonth() const{
		return Month;
	}
	
	int Date::getyear() const{
		return year;
	}

	//definition of setter of class date
	
	void setDay(int x){
		day = x;
	}
	
	void setMonth(int x){
		Month = x;
	}
	
	void setYear(int x){
		Year = x;
	}

  //definition of addition functions in the date , month , year.
  
  void addDay(int x){
  	
  }
  
  void addMonth(int x){

  }
  
  void addYear(int x){

  }
  
  

	return 0;
}

