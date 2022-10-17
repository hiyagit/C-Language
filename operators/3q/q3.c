#include<stdio.h>

int main()
{ int a, b, c;
	printf("\nEnter any two numbers:");
	scanf("%d%d",&a,&b);

	c = (a>b)?a:b;

	printf("\nMaximum of two numbers is %d.\n",c);

	return 0;
}
