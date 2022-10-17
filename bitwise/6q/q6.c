#include<stdio.h>
void main()
{int num,n,c;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Enter the position:");
	scanf("%d",&n);
	c = num^(1<<n);
	printf("Number after toggling a bit at %d position: %d",n,c);
}	
