#include<stdio.h>
void main()
{int n,a,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Number of bits as '1' in %d is:",n);
	while(n>0)
	{
		a=n&1;
		if(a==1)
		{
			count++;
		}
		n=n>>1;
	}
	printf(" %d\n",count);
}

