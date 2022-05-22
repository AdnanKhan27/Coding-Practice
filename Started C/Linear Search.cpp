#include<stdio.h>

int main()
{
	int n,k,f=0,r;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter your Query:\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			f = 1;
			r = arr[i];
		}
	}
	if(f==1)
	{
		printf("Match Found!\nResult : %d",r);
	}
	else
	{
		printf("Match not Found!maa chudao");
	}
}
