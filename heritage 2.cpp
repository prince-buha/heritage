/*

2. WAP with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message (different for mother and daugther). 
In the main define a daughter and call the display() method on it.

The method from Mother Class
The method from Daughter Class
*/
#include<iostream>
using namespace std;
class Mother{
	public:
		void getA(){
			cout<<"The method from Mother Class "<<endl;
		}
};
class Daughter:public Mother{
	public:
		void getB(){
			cout<<" The method from Daughter Class ";
		}
};
int main(){
	Daughter d;
	d.Mother::getA();
	d.getB();
	return 0;
}
