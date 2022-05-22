#include<iostream>
using namespace std;
int main()
{
	int i,j;int x=0;int o=0;
	char arr[20];
	cout<<"Write the word:"<<endl;
	cin>>arr;
	//checking array
	cout<<arr<<endl;
	for(i=0;i<20 /*arr[i]='\0'*/;i++)
	{
		if(arr[i]=='x'|| arr[i]=='X')
		x=x+1;
		
	}
	
	for(j=0;j<20 /*arr[j]='\0'*/;j++)
	{
		if(arr[j]=='o'|| arr[j]=='O')
		o=o+1;
	
	}
//checking the no. of x and o;
cout<<x<<endl<<o;
	if(x==o)
	cout<<"True";
	else
	cout<<"False";
	return 0;
}
