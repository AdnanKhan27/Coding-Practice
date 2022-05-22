#include<stdio.h>
int main()
{
	char a[100];
	int i,count=0;
	printf("Enter sequence of DNA");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='A' &&a[i+1]=='T' &&a[i+2]=='A' &&a[i+3]=='T' &&a[i+4]=='A' &&a[i+5]=='C' &&a[i+6]=='A')
		count++;
	}
	printf("%d",count);
	return 0;
}
