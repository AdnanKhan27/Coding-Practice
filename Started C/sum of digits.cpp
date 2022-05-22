#include<stdio.h>
int main()
{
	int n,r,o,sum=0;
	printf("Enter the no.:");
	scanf("%d",&n);
	o=n;
	while(o!=0)
	{
		r=o%10;
		sum =sum+r;
		o/=10;
	}
	printf("The sum of the digits of the no. is:%d",sum);
	
}
