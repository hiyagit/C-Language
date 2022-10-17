#include<stdio.h>
void main()
{int n,i;
	printf("Enter the number of element:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
