#include<iostream>
using namespace std;
class student
{
	private:
		int id;
		char name[10];
		public:void getstu()
		{
			cout<<"enter student id,name";
			cin>>id>>name;
		}
		void put()
		{
			cout<<id<<ends<<name;
		}
};
class physical: public student
{
	float height,weight;
	public:
		void getphy()
		{
			cout<<"enter height and weight";
			cin>>height>>weight;
		}
		void putphy()
		{
		cout<<height<<weight;
		}
};
int main()
{
	physical p;
	p.getphy();
	p.getstu();
	p.putphy();
	return 0;
}
