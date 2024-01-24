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
