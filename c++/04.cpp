#include<iostream>
using namespace std;
int main()
{
	int number,ans;
	number=10;
	ans=0;
//	cout<<"Result:"<<ans;
try
{
	throw ans;
	ans=number/0;
}
catch(int i)
{
	cout<<"Denominator not be zero";
}
}
