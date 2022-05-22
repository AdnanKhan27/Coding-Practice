#include<stdio.h>
int main()
{
	double p,r,y,s;
	printf("Enter the principle amount:");
	scanf("%lf",&p);
	
	printf("Enter the rate of interest:");
	scanf("%lf",&r);
	
	printf("Enter the time(in years):");
	scanf("%lf",&y);
	
	s=(p*r*y)/100;
	printf("The simple interest is:%lf",s);
	
}
