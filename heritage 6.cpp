/*

6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

	Enter your id:-114
Enter your name:-prince
Enter your role:-maneger
Enter your salary:-80000
Enter your experience:-7
enter your company name:-rnw
enter your address:-abishekluxriya
enter your email:-princebuha105@gmail.com
enter your contact:-9725683070

name is :prince
role is :maneger
salary is :80000
id is :114
name is :prince
role is :maneger
salary is :80000
experience is :7
company name is :rnw
address is :abishekluxriya
email is :princebuha105@gmail.com
contact is :9725683070
	*/

#include<iostream>
using namespace std;

class A{
	public :
	int id;
	int salary;
	int experience;
	long long int contact;
	char name [30];
	char role [30];
	char company_name[30];
	char address[30];
	char email[30];
	
		setdata(){
			cout<<"Enter your id:-";
			cin>>id;
			cout<<"Enter your name:-";
			cin>>name;
			cout<<"Enter your role:-";
			cin>>role;
		}
		
};
class B:public A{
	public:
		void setdata(){
			cout<<"Enter your salary:-";
			cin>>salary;
			cout<<"Enter your experience:-";
			cin>>experience;
		}
};
class C:public B{
	public :
		void setdata(){
			cout<<"enter your company name:-";
			cin>>company_name;
			cout<<"enter your address:-";
			cin>>address;
		}
		void getdata(){
			cout<<"name is :"<<name<<endl;
			cout<<"role is :"<<role<<endl;
			cout<<"salary is :"<<salary<<endl;
		}
};
class D:public C
{
	public :
			void setdata(){
			cout<<"enter your email:-";
			cin>>email;
			cout<<"enter your contact:-";
			cin>>contact;
		}
			void getdata(){
				cout<<"id is :"<<id<<endl;
				cout<<"name is :"<<name<<endl;
				cout<<"role is :"<<role<<endl;
				cout<<"salary is :"<<salary<<endl;
				cout<<"experience is :"<<experience<<endl;
				cout<<"company name is :"<<company_name<<endl;
				cout<<"address is :"<<address<<endl;
				cout<<"email is :"<<email<<endl;
				cout<<"contact is :"<<contact<<endl;
			
		}
		
};

	int main(){
		D d1;
		
		d1.A::setdata();
		d1.B::setdata();
		d1.C::setdata();
		d1.D::setdata();
		cout<<endl;
		
	
		d1.C::getdata();
		d1.D::getdata();
		
	return 0;
		
	}
