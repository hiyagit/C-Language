#include<stdio.h>
void main()
{ int n,l=0;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Sum of all odd numbers till %d: ",n);
	while(n>0)
	{
		if(n%2!=0)
			l+=n;
		        n--;
	}
		printf("%d\n",l);
}
