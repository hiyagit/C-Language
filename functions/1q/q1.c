#include<stdio.h>
int fact(int);

void main()
{ int n,r,npr;
	printf("Enter a number n:");
	scanf("%d",&n);
	printf("Enter a number r:");
	scanf("%d",&r);
	npr=fact(n)/fact(n-r);
	printf("%d!/(%d-%d)! : %d\n",n,n,r,npr);
}

int fact(int n)
{int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

