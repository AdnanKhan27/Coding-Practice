#include<stdio.h>
int main()
{
	int n,i,a[50];
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
	
	printf("a[%d]: %u",i,&a[i]);
	}
}
