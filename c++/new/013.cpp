//masking the code
#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Enter the number of digits:"<<endl;
cin>>n;
char arr[n];
cout<<"Write the code:"<<endl;
cin>>arr;
for(i=0;i<n-4;i++)
{
	arr[i]= '#';	
}
cout<<arr;
}
