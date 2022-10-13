#include <iostream>
using namespace std;

// binary operator overloading in c++

class Test
    {
        private:
        	int number;
        	
        public:
		 Test(int n)
		 {
		 	number = n;
		 }

		

     void display()
       {
        cout<<"Value of number: "<<number<<endl;
       }
       
    Test operator+(Test t2){
    	Test t3(0);
    	t3.number = number + t2.number;
    	return t3;
	}
	
	Test operator-(Test t2){
		Test t3(0);
		t3.number = number - t2.number;
		return t3;
	 }
	 
	 	Test operator*(Test t2){
		Test t3(0);
		t3.number = number * t2.number;
		return t3;
	 }
	 
	 	Test operator/(Test t2){
		Test t3(0);
		t3.number = number / t2.number;
		return t3;
	 }

   };


int main() {

    Test t1(10),t2(5),sum(0);
    
      t1.display();
	  t2.display();
//   sum = t1 + t2;
//   sum = t1 - t2;
//   sum = t1 * t2;
//   sum = t1 / t2;

    sum.display();

   return 0;
}
