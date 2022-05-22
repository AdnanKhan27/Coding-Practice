//check wheather the no. is <=0
#include <iostream>
using namespace std;
int check(int x)
{
	if (x<=0)
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
 	int x;
 	cout<<"Enter the number:"<<endl;
 	cin>>x;
 	return check(x);
 }
