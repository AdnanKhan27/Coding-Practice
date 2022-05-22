#include<stdio.h>
int main()
{
	float r1,r2,r3,R;
	printf("Enter the three resistances:");
	scanf("%f%f%f",&r1,&r2,&r3);
	
	R=(r1*r2*r3)/(r1*r2+r2*r3+r3*r1);
	printf("The combined resistance, in ohms,is %f.",R);
	
}
