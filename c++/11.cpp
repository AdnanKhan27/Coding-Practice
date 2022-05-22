#include<iostream>
using namespace std;
class database
{
	public:
		virtual void getname();
};
class accountant :public database
{
	public:
		void getname()
	{
		cout<<"This is accountant class"<<endl;
		
	}
};
class manager: public database
{
	public:
		void getname()
		{
			cout<<"This is manager class"<<endl;
			
		}
};
class customer:public database
{
	public :
		void getname()
		{
			cout<<"This is customer class"<<endl;
		}
};
int main()
{
	manager m;
	accountant a;
	customer c;
	m.getname();
	a.getname();
	c.getname();
	return 0;
	
}
