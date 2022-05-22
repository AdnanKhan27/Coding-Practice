#include<stdio.h>
int main()
{
	int i,d,m,w;
	printf("Enter the no. of days:");
	scanf("%d",&i);
	
	m=i/28;
	w=(i%28)/7;
	d=(i%28)%7;
	
	printf("MM:WW:DD=%d:%d:%d",m,w,d);
}
