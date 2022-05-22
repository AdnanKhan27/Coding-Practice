#include<iostream>
using namespace std;
int argument(int a)
{
return	a+1;	
}

int main()
{
	int b;
	cout<<"write the number:"<<endl;
	cin>>b;
	cout<<argument(b);
	return b+1;
}
