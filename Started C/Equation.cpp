#include<stdio.h>
int main()
{
	int n,x,y;
	
	printf("Enter the values of x,y:");
	scanf("%d %d",&x,&y);
	
	if(y<5)
	{
		n=(5*x)+y;
		printf("%d=(%d,%d)",n,x,y);
	}
}
