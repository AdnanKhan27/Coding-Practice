#include<iostream>
using namespace std;
float area (float x,float y)
{
	float total= (x*y)/2;
	return (x*y)/2.00;
}
int main()
{
	float b,h;
	cout<<"Write the base & height:"<<endl;
	cin>>b;
	cin>>h;
	cout<<area(b,h);
	return area(b,h);
	}
