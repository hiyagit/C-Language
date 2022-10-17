#include<stdio.h>
void main()
{int num,n,c;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Enter the position:");
	scanf("%d",&n);
	c=(1<<n)|num;
	printf("Number after setting a bit at %d position: %d",n,c);
	
}
