#include <iostream>
using namespace std;

// subscript [] operator overloading in c++

class Students
    {
        private:
        	int marks[3];

        public:
				 Students(int a,int b,int c){
				 	marks[0] = a;
				 	marks[1] = b;
				 	marks[2] = c;
				 }
				 

     // subscript [] operator overloading .
	 int operator[](int position){
		   return marks[position];
	 }
   };


  


int main() {

   Students s1(75,34,82);
   cout<< s1[0]<<endl;


   return 0;
}
