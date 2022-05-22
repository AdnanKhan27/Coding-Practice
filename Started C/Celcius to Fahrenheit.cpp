#include<stdio.h>
int main()
{
	double cent,fahr;
	scanf("%lf",&fahr);
	cent=((fahr-32)*0.555);
	printf("%lf F = %lf C",fahr,cent);
//	return 0;
}
