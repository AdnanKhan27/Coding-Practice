#include<iostream>
using namespace std;
int number(int x)
{
if (x<100)
	{
		cout<<"True";
		return true;
	}	
else
	{
		cout<<"False";
		return false;
	}
}
int main()
{
	int y;
	cout<<"Enter the number:"<<endl;
	cin>>y;
	return number(y);
}
