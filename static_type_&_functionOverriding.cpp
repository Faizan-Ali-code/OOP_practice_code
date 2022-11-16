// CPP program to illustrate
// Function Overriding
#include<iostream>
using namespace std;

class BaseClass
{
public:
	 void Display()
	{
		cout << "\nThis is Display() method"
				" of BaseClass";
	}
	void Show()
	{
		cout << "\nThis is Show() method "
			"of BaseClass";
	}
};

class DerivedClass : public BaseClass
{
public:
	// Overriding method - new working of
	// base class's display method
	void Display()
	{
		cout << "\nThis is Display() method"
			" of DerivedClass";
	}
	
//	void Show()
//	{
//		cout << "\nThis is Show() method "
//			"of Derived Class";
//	}
	
	void Show()
	{
		cout << "\nThis is Show() method "
			"of Derived Class";
	}
};

// Driver code
int main()
{
	DerivedClass dr;
	BaseClass &bs = dr;  //static type of bs is baseClass so it's own function ll be called rather than derived class's
	bs.Display();
	dr.Show();  //if derived class does not have show function then show() of base class ll be called.
}

