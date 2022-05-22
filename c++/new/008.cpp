//maximum range of the third side of a triangle
#include<iostream>
using namespace std;
int edge(int a,int b)
{
	return (a+b)-1;
}
int main()
{
	int a,b;
	cout<<"Enter the 2 sides of the triangle:"<<endl;
	cin>>a>>b;
	return edge(a,b);
}
