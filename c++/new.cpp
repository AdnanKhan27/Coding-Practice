#include<iostream>
using namespace std;
class person
{
	public:
		void eat()
		{
			cout<<"This is base class";
		}
};
class mathsteacher:public person
{
	public:
		void TeachMaths()
		{
			cout<<"This is subclass";
		}
};
int main()
{
	mathsteacher m;
	m.eat();
	m.TeachMaths();
}
