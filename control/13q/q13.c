#include<stdio.h>
void main()
{ int n,m=0,tmp=0,r;
	printf("Enter any number:");
	scanf("%d",&n);
	tmp=n;
	while(n>0)
	{
		r=n%10;
		m+=r;
		n/=10;
	}
	printf("Sum of digits of given number is %d.\n",m);
}
