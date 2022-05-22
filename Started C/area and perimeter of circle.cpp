#include<stdio.h>
int main()
{
	double r,a,p;
	printf("Enter the radius of the circle:");
	scanf("%lf",&r);
	const double pi=3.14;
	a=pi*r*r;
	p=2*pi*r;
	printf("The area is %0.2lf and perimeter is %0.2lf",a,p);
	
}
