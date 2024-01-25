/*
3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function.
 Then create two bases variables Zebra and Dolphin which write a message telling the age,
 the name and giving some extra information (e.g. place of origin).

enter zebra nick name:-pet
enter zebra age:-34
enter zebra's origin palce:-afrika
name is :pet
age is :34
origin place is :afrika
enter Dolphin  nick name:-net
enter Dolphin age:-45
enter your Dolphin origin place:-usa
name is :net
age is :45
origin place is :usa
*/

#include<iostream>
using namespace std;

class animal{
	public:
	char name[30];
	int age;
	char place[30]; 
};
class zebra : public animal{
	public:
		void setdata(){
			cout<<"enter zebra nick name:-";
			cin>>name;
			cout<<"enter zebra age:-";
			cin>>age;
			cout<<"enter zebra's origin palce:-";
			cin>>place;
		}
		void getdata(){
			cout<<"name is :"<<name<<endl;
			cout<<"age is :"<<age<<endl;
			cout<<"origin place is :"<<place<<endl;
		}

};
class Dolphin : public animal{
			public:
		void setdata2(){
			cout<<"enter Dolphin  nick name:-";
			cin>>name;
			cout<<"enter Dolphin age:-";
			cin>>age;
			cout<<"enter your Dolphin origin place:-";
			cin>>place;
		}
		void getdata2(){
			cout<<"name is :"<<name<<endl;
			cout<<"age is :"<<age<<endl;
			cout<<"origin place is :"<<place<<endl;
		}
			
};
	int main(){
		zebra z1;
		z1.setdata();
		z1.getdata();
		
		Dolphin d1;
		d1.setdata2();
		d1.getdata2();
		
		
		return 0;
	}

