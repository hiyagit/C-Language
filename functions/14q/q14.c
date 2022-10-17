#include<stdio.h>
int fact(int);
int gcd(int,int);
void main()
{ int a,b,c,d,e;
	printf("Enter the number for factorial:");
	scanf("%d",&a);
	b=fact(a);
	printf("\nFactorial of %d is %d.\n",a,b);
	printf("\nEnter two numbers for GCD:");
	scanf("%d%d",&c,&d);
	e=gcd(c,d);
	printf("\nGCD of %d and %d is: %d\n",c,d,e);
}
int fact(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return n*fact(a-1);
	}
}
int gcd(int c,int d)
{
	if(d!=0)
	{
		return gcd(d,c%d);
	}
	else
	{
		return c;
	}
}

