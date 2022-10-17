#include<stdio.h>
void main()
{int num,n,c;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Enter the position:");
	scanf("%d",&n);
	if(c=num&(1<<n))
	{
		printf("\nThe bit is set at %d position.\n",n);
	}
	else
	{
		printf("\nThe bit is not set at %d position.\n",n);
	}
}
