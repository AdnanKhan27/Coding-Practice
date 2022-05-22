// Addition program.
#include<stdio.h>

//Function main begins program execution

int main()
{
	float integer1;//First number to be entered by user
	float integer2;//Second number to be entered by user
	
	printf("Enter first number\n"); // prompt
	scanf("%f", &integer1);// Read an integer
	
	printf("Enter second number\n");// prompt
	scanf("%f", &integer2);// Read an integer
	
    float sum;//Variable in which sum will be stored
	sum = integer1 + integer2;// assign totla to sum
	
	printf("sum is %f\n", sum);
}// End of Funtion main
