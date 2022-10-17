#include<stdio.h>
int fact(int);

void main()
{int n,r,ncr,npr;
	printf("Enter a number n:");
	scanf("%d",&n);
	printf("Enter a number r:");
	scanf("%d",&r);
	npr=fact(n)/fact(n-r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("%dp%d : %d\n",n,r,npr);
	printf("%dc%d : %d\n",n,r,ncr);
}

int fact(int n)
{ int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
