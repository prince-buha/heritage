/*5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

enter a number :-5
square is :25
enter a number :-5
cube is :125

*/

#include<iostream>
using namespace std;

class number{
	public :
		void num(){
			int n;
			cout<<"enter a number :-";
			cin>>n;
		}
};

class square:public number
{
	public :
		
		void squaresum(){
			int n=5;
			cout<<"square is :"<<n*n<<endl;
	}
};
class cube:public number
{
	public :
		
		void  cubesum(){
			int n=5;
			cout<<"cube is :"<<n*n*n<<endl;
	}
};
	
	int main(){
		cube c1;
		square s1;
		
		s1.num();
		s1.squaresum();
		
		c1.num();
		c1.cubesum();
	
	
	
	return 0;
		
		
	}


