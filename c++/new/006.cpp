//Hours & minutes into second
#include<iostream>
using namespace std;
int convert(int h,int m)
{
	h*=3600; m*=60;//converting hours into minutes
	return (h+m);//time in minutes
}
int main()
{
	int h,m;
	cout<<"Write the time:"<<endl;
	cin>>h;
	cin>>m;//writing hours & min. altogether
	cout<<convert(h,m);
	return convert(h,m);
}
