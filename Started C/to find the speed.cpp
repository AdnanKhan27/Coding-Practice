#include<stdio.h>
int main()
{
	float x,y,s;
	printf("Enter distance:");//distance in meters
	scanf("%f",&x);
	printf("Enter time:");//time in min.
	scanf("%f",&y);
	y=y*60;
	
	s=x/y;//speed=distance/time
	printf("The speed is:%0.3f",s);
}
