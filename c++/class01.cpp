#include<iostream>
using namespace std;
class students
{
	public:
	int id;
	char name[20];
	int age;
	public:
		void getstudents();
		void display();
};
void students::getstudents()
{
	cout<<"Enter students details";
	cin>>id>>name>>age;
}
void students::display()
{
	cout<<"id\t"<<"name\t"<<"age";
	
	cout<<id<<name<<age;
}
int main()
{
	students s[40];
	cout<<"Enter number of student details";
	int i,n;
	cin>>n;
	if(n<1||n>40)
	cout<<"Enter the valid input";
	else
	for(i=0;i<n;i++)
	{
		s[i].getstudents();
	}
}
