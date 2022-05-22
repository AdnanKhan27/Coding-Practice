#include<stdio.h>
int main()
{
	int i,n[5],a;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n[i]);
	}
		printf("Enter no. you want:");
		scanf("%d",&a);
	for(i=1;i<=5;i++)
	{
		if(a==n[i])
		printf("Element %d is found at %d",a,i);
	}
}
