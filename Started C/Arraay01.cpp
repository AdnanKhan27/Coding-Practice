#include<stdio.h>
int main()
{
	int i,n[3];
	for(i=0;i<3;i++)
	{
		printf("Enter value:");
		scanf("%d",&n[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%d - %d\n",n[i],&n[i]);
	}
}
