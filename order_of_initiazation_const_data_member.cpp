
#include <iostream>
using namespace std;


class ABC{
 int x;
 int y;
 int z;
 
public:
	
 ABC();
 int getData_x(){
 	return x;
 }
 
  int getData_y(){
 	return y;
 }
 
  int getData_z(){
 	return z;
 }
 
};

ABC::ABC():y(10),x(y),z(y){                 //  initializing the data members with initializer list.

}

/* x = Junk value
 y = 10
 z = 10 */

int main() {
   ABC obj;
   cout<<"value of x is : "<<obj.getData_x()<<endl;
   cout<<"value of y is : "<<obj.getData_y()<<endl;
   cout<<"value of z is : "<<obj.getData_z()<<endl;
   return 0;
}



