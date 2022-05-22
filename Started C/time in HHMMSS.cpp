#include<stdio.h>
int main()
{
	int i,h,m,s;
	printf("Enter the time:");
	scanf("%d",&i);
	
	h=i/3600;
	m=(i%3600)/60;
	s=(i%3600)%60;
	printf("the time is %d:%d:%d",h,m,s);
}
