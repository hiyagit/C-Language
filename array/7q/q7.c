#include<stdio.h>
void main()
{int n,i,j,tmp;
	printf("Enter the number of element:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the %d numbers:",n);
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("Array in same order:");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\nArray in reverse order:");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		tmp=b[i];
		b[i]=b[j];
		b[j]=tmp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}


