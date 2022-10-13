#include <iostream>
using namespace std;

// Assignment operator overloading in c++

class Employee
    {
        private:
        	int id;
        	string name;

        public:

		friend istream & operator >>(istream &input, Employee &obj1);
		friend ostream & operator <<(ostream& output, Employee &obj1);
   };
   
   
   // stream insertion (<<) operator overloading .
   istream & operator >>(istream &input, Employee &obj1){
		input>>obj1.id;
		input>>obj1.name;
	//	return input;
	}
	
	// stream extraction(>>) operator overloading .
	ostream & operator <<(ostream& output, Employee &obj1){
		output<<"Employee id: "<<obj1.id<<endl;
		output<<"Employee name: "<<obj1.name<<endl;
		//return output;      // if you want to  cascaded objects cin>>obj1>>obj2>>obj3; then u must return the object reference. else void is enough.
	}


int main() {
int x;
Employee obj1,obj2,obj3;
//cin>>obj1;
//cout<<obj1;


//works fine without returning ostream or istream object even in the case with multiple objects.
//works fine even with an extra data type insertion or extraction
cin>>obj1>>obj2>>obj3>>x;
cout<<obj1<<obj2<<obj3<<x;
//cout<<x;





   return 0;
}
