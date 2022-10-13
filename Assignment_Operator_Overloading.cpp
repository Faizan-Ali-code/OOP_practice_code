#include <iostream>
using namespace std;

// Assignment operator overloading in c++

class Distance
    {
        private:
        	int feet;
        	float inches;

        public:
		 Distance(int f=0,float i=0.0)
		 {
		 	feet = f;
		 	inches = i;
		 }



     void display()
       {
        cout<<"Value of feet: "<<feet<<endl;
        cout<<"Value of inches: "<<inches<<endl;

       }


	// = operator overloading , in the same way other operators can be overloaded.
    void operator=(Distance d2){
    	feet=d2.feet;
    	inches=d2.inches;
    
	}

   };


int main() {

Distance d1,d3;
Distance d2(5,2.5);
d1.display();
d2.display();
// d1=d3=d2;
d1=d2;
d1.display();



   return 0;
}
