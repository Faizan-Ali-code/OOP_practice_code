#include <iostream>
using namespace std;

// function call operator overloading in c++

class Students
    {
        private:
        	int marks;

        public:
			Students(int m){
				cout<<"Constructor Called"<<endl;
				 	marks = m;
				 }

		void display_marks(){
			cout<<marks<<endl;
		}

     // function call operator overloading .
	 Students operator()(int m){
	 	
	 	marks = m;
	 	cout<<"Operator function called  "<<marks<<endl;
	 	return *this;
	 	
	 }
	 
//	 void operator()(int m){
//	 	
//	 	marks = m;
//	 	cout<<"Operator function called  "<<marks<<endl;   // in this way the s1(25)(35) wouldn't execute. as the reference isn't returning.
//	 //	return *this;
//	 	
//	 }
	 
   };




int main() {

   Students s1(50);
   s1.display_marks();
   s1(67);       // ordinary case
   s1(25)(35);  // then must return object reference for which overloaded operator function is called, so again function can be called.
   s1.display_marks();


   return 0;
}
