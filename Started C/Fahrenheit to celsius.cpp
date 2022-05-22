#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature(in fahrenheit):");
	scanf("%f",&f);
	
	c=(f-32)*(0.555);
	printf("The temperature (in celcius) is:%f",c);
}
