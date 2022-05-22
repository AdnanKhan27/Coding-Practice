#include<stdio.h>
#include<string.h>

int main()
{
	int c=0,i,l;
	printf("Enter the string:");
	char n[50];
	scanf("%s",&n[50]);
	l=strlen(n);
	
    for(i=0;i<l;i++)
         {
         	if(n[i]=='a')
         	{c++;
			 }
		 }
		 printf("The no. of a: %d",c);
	return 0;
}
