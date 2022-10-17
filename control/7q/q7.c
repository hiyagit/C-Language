#include<stdio.h>
void main()
{int n,tmp=0,m=0,r;
	printf("Enter the number:");
	scanf("%d",&n);
	tmp=n;
	while(n>0)
	{
		r=n%10;
		m+=(r*r*r);
		n=n/10;
	}
	if(m==tmp)
		printf("\nNumber is Armstrong Number.\n");
	else
		printf("\nNumber is not an Armstrong Number.\n");
}
