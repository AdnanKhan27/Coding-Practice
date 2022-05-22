#include<iostream>
#include<cstdlib>
using namespace std;
int addno(int x,int y)
{
	int result=x+y;

	return result;
}

int main()
{	int x;
srand(98);
	//int x=addno(4,5);
	//cout<<x<<endl;
	for(x=1;x<=10;x++)
	{
			cout<<rand()%10<<endl;
	}
}
