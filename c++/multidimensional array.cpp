#include<iostream>
#include<string.h>
using namespace std;
class myid
{
	public:
	string myname;
	int id;
	myid()
	{	//Default constructor
		cout<<"Default constructor"<<endl;
		 id=5;
	}
	myid(int x)
	{	//Parametrized constructor
		cout<<"Parametrized constructor"<<endl;
		 id=x;
	}
	void printname();
	/*void printid()
	{
		cout<<"Yoru id is:"<<id<<endl;
	}*/
};

void myid::printname()
{
	cout<<"My name is:"<<myname<<endl;
}
int main()
{
	myid obj1;
	cout<<"My id:"<<obj1.id<<endl;
	obj1.myname="Adnan Khan";
	obj1.printname();
	//obj1.id=7;
	myid obj2(20);
	cout<<"My id:"<<obj2.id<<endl;
	return 0;
}
