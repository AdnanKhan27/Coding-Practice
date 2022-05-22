#include<iostream>
#include<string.h>
using namespace std;
class student
{
	char name[20],course[20];
	public:
		student()
		{
		}
	student(char name[20],char course[20])
	{
	strcpy(this->name,name);
	strcpy(this->course,course);
	}
	void showstudent()
	{
	cout<<"name"<<name<<endl;
	cout<<"course"<<course<<endl;
	}
	};

class marks:public student
{
	int m,p,c;
	public:
		marks(char name[20],char course[20],int m,int p,int c)
		{
			student::student(name,course);
			this -> m=m;
			this -> p=p;
			this -> c=c;
		}
		void showmarks()
		{
			cout<<m<<endl<<p<<endl<<c<<endl;
		}

};
	int main()
{

	marks m("abc","maths",60,45,86);
	m.showstudent();
	m.marks();
}
