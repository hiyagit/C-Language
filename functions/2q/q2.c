#include<stdio.h>
int fact(int);
int main()
{ int a,b;
	printf("Enter the number:");
	scanf("%d",&a);
	b=fact(a);
	printf("\nFactorial of %d is %d.\n",a,b);

	return 0;
}

int fact(int n)
{ if(n==1)
	return 1;
 else
	return n*fact(n-1);
}
