// C++ program to demonstrate
// prefix increment operator overloading

#include <bits/stdc++.h>
using namespace std;

class Integer {
private:
	int i;

public:
	// Parameterised constructor
	Integer(int i = 0)
	{
		this->i = i;
	}

	// Overloading the prefix operator
	Integer operator++()
	{
		Integer temp;
		temp.i = ++i;
		return temp;
	}

	// Function to display the value of i
	void display()
	{
		cout << "i = " << i << endl;
	}
};

// Driver function
int main()
{
	Integer i1(3);

	cout << "Before increment: ";
	i1.display();

	// Using the pre-increment operator
	Integer i2 = ++i1;  //default copy constructor implemented by compiler.

    //  ++i1; // can also be done.

	cout << "After pre increment: ";
	i2.display();
	// i1.display();  //can also be done.
}

