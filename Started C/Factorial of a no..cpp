#include<stdio.h>
int main()
{
	int i,x,f;
	printf("Enter the no.:");
	scanf("%d",&x);
	
	for(i=x;i>0;i--)
	{
		f=f*i;
		printf("%d",i);
	}
	printf("The factorial of %d=%d",x,f);
	
}
