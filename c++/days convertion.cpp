#include<iostream>
using namespace std;
int main()
{
	int d,w,m,D;	//no. of days
	cout<<"Enter the number of days:";
	cin>>d;
	m=d/28;
	w=(d%28)/7;
	D=(d%28)%7;
	cout<<m<<"months"<<w<<"weeks"<<D<<"days";
	
}
