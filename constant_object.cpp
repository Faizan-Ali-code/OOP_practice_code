#include<iostream>
using namespace std;
class Demo {
   int val;
   public:
   Demo(int x = 0) {
      val = x;
   }
   int getValue() const {
      return val;
   }
};

int main() {
	
   const Demo d(28);    // constructor and destructor are always allowed to modify state of object even if object is constant.
   Demo d1(8);
   cout << "The value using object d : " << d.getValue(); // constant object can only access constant member functions.
   cout << "\nThe value using object d1 : " << d1.getValue();
   
   return 0;
}
