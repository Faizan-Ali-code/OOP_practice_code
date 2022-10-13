#include <iostream>
using namespace std;

// binary operator overloading in c++

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


	// + operator overloading , in the same way other operators can be overloaded.
    Distance operator+(Distance d2){
    	Distance d3(0,0.0);
    	d3.feet = feet + d2.feet;
    	d3.inches = inches + d2.inches;
    	return d3;
	}



   };


int main() {

Distance d1(5,2.5);
Distance d2(6,3.4);
Distance sum(0,0.0);
d1.display();
d2.display();
sum.display();
sum = d1 + d2;
cout<<"\nafter sum"<<endl;
sum.display();

   
   return 0;
}
