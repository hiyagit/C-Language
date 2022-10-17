#include<stdio.h>
void fact(int);
void main()
{
	printf("Add the first seven terms of series 1/1!+2/2!+3/3!+4/4!..");
	fact(7);
	
}

void fact(int n)
{int i,fact=1;
	float a=0;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		a=a+((float)i/fact);
	}
	printf("\nAfter addition of first seven terms of the series 1/1!+2/2!+3/3!+4/4!... : %f",a);
}
