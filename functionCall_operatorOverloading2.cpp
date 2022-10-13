#include <iostream>
using namespace std;

// function call () operator overloading in c++
#include<iostream>
using namespace std;
class sample{
      int a ,b,c;
      
     public:
         sample(){
         	a=0;
            b=0;
            c=0;
		 }
                  I    
         sample (int x,int y,int z) {    //parameterized constructor
                                     
             a=x;
             b=y;
             c=z;
     }
         void operator()(int p ,int q, int r) {
		 
             cout <<endl << "Operator Overloading" <<endl;
             a=p;
             b=q;
             c=r;
 }
 
     void printData() {	 
     cout<<a<<" "<<b<<" "<<c<<endl;
}
  
};

int main
     sample s1;
     sample s3;
    s3(100, 200, 500);
    s3.printData ();
     s1.printData ();
     sample s2(10, 20, 30);
     s2.printData ();
     return 0;

}
