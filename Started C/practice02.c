#include<stdio.h>

int main()
{
	int c=0,i;
	printf("Enter the string:");
	char n[50];
	scanf("%s",&n);
	
	
    for(i=0;n[i]!='\0';i++)
    if(n[i]=='a')c++;
			 
	
		 printf("The no. of a: %d",c);
	
}
