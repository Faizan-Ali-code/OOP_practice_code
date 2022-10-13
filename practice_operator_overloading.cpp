#include <iostream>
using namespace std;


class Test
    {
        private:
        	int number;
        	int length,width,Area;
        public:
		 Test()
		 {
		 	number = 1;
		 }
		 
		 // operator overloading for postfix operator i.e., operand++
		 void operator++(int){
		 	number++;
		 }
		 
		 // operator overloading for postfix operator i.e., ++operand
		 void operator++(){
		 	++number;
		 }
		 
		  // operator overloading for postfix operator i.e., --operand
		void operator--(){
			--number;
		}
       // operator overloading for postfix operator i.e., --operand
		void operator--(int){
			number--;
		}
       
       
     void display()
       {
        cout<<"Value of number: "<<number<<endl;
       }
       
   };
   
   
int main() {
    
    Test t1;
    t1.display();
//    t1++;
//	++t1;
//   --t1;
//	 t1--;

    t1.display();
    
   return 0;
}
