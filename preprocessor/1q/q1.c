#include<stdio.h>
#define fact(n){\
       	for(i=1;i<=n;i++)\
	{\
		f=f*i;\
	}\
	printf("Factorial of %d : %d",n,f);\
}

void main()
{int n,i,f=1;
	printf("Enter any number for factorial:");
	scanf("%d",&n);

	fact(n);

}
