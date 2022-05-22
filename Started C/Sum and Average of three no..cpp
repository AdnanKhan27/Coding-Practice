#include<stdio.h>
int main ()
{
    int a,b,c;
	printf("Enter three no.:");
	scanf("%d%d%d",&a,&b,&c);
	  int sum=a+b+c;
	 float average = float(sum)/3;
	printf("Sum=%d \n Average=%f",sum,average);
	
}
