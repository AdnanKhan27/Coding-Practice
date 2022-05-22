#include<iostream>
using namespace std;
class Acc
{
	int acc;
	char name[10];	
	public:
	void getacc()
	{
		cin>>acc>>name;
	}
};
class savings:public Acc
{
	float bal;
	public:
		void getbal()
	{
		cin>>bal;
		if(bal<500)
		cout<<"min bal 500";
		else
		cout<<"account created";	
	}
};
class current:public Acc
{
	float bal;
	public:
		void getbal()
		{
			cin>>bal;
			if(bal<1000)
			cout<<"min bal 1000";
			else
			cout<<"account created";			
		}
};
int main()
{
	int op;
	cout<<"1.saving Acc";
	cout<<"2.current Acc";
	cout<<"enter your option";
	cin>>op;
	if(op==1)
	{
		savings s;
		
		s.getacc();
		s.getbal();
	}
		else if(op==2)
		{
			current c;
			c.getacc();
			c.getbal();
		}
		else
		cout<<"/n valid selection";
	
	return 0;
}
