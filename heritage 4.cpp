/*
4. WAP to read and print employee information using multiple inheritance.
enter your name:-prince
 name is :prince
enter your id:-345
 id is :345
enter your age:-45
 age is :45
enter your city:-surat
 city is :surat
*/

#include<iostream>
using namespace std;

class name {
	private :
		char name[30];
		
		
		public :
			void setname(){
				cout<<"enter your name:-";
				cin>>name;
			}
			
			void getname(){
				cout<<" name is :"<<name<<endl;
				
			}
			
	};

class id {
	private :
		int id;
		
		
		public :
			void setid(){
				cout<<"enter your id:-";
				cin>>id;
			}
			
			void getid(){
				cout<<" id is :"<<id<<endl;
				
			}
			
	};
		
class age {
	private :
		int age;
		
		
		public :
			void setage(){
				cout<<"enter your age:-";
				cin>>age;
			}
			
			void getage(){
				cout<<" age is :"<<age<<endl;
				
			}
			
	};
	
class city:public name,public id,public age
{
	private :
		char city[30];
		
		
		public :
			void setcity(){
				cout<<"enter your city:-";
				cin>>city;
			}
			
			void getcity(){
				cout<<" city is :"<<city<<endl;
				
			}
			
	};
	
	int main(){
		city c1;
		c1.setname();
		c1.getname();
		c1.setid();
		c1.getid();
		c1.setage();
		c1.getage();
		c1.setcity();
		c1.getcity();
		
	return 0;
		
	}
