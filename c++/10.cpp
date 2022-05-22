#include<iostream>
using namespace std;
class animals
{
	public:
		virtual void sound()
		{
			cout<<"This is base class"<<endl;
		}
};
class dogs:public animals
{
	public:
		void sound()
		{
			cout<<"This is derived class"<<endl;
		}
};
int main()
{
	animals *a;
	dogs d;
	a=&d;
	a->sound() ;
	return 0;
}
