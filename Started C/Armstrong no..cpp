#include<stdio.h>
int main()
{
	int n,r,o,p=0;
	printf("Enter the no.:");
	scanf("%d",&n);
	o=n;
	while(o!=0)
	{
	 r=o%10;
	 p+=r*r*r;
	 o/=10;
	 
	}
	if(p==n)
	{printf("The no. is armstrong no.");}
	else
	{printf("The no. is not armstrong no.");}
	return 0;
}
