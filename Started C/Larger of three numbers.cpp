#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three no.:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
	printf("a is the largest no.");}
	if(b>a && b>c)
	{
	printf("b is the larget no.");}
	else
	{printf("c is the largest no.");}
	
	
}
