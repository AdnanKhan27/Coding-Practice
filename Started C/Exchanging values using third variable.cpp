#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("the values of a and b after exchange:%d,%d",a,b);
}
