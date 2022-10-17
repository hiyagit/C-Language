#include<stdio.h>
void main()
{ int i,n,l=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%5!=0)
			l+=i;
		else
			continue;
	}
	printf("Sum of all numbers till %d except divisible by 5: %d\n",n,l);
}
