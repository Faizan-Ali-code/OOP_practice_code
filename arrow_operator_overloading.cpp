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


     // arrow operator overloading .
	
	 Students* operator->(){
	 	cout<<"operator overloaded fucntion is called"<<endl;
	 	return this;
	 }
	 

	 
   };




int main() {

   Students s1(50);
   s1.display_marks();
   
   s1->display_marks();


   return 0;
}
