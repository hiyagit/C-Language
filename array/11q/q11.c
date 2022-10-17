#include<stdio.h>
void main()
{int i,j,k,n,n1,n2;
	printf("Enter the number of element for 1st array:");
	scanf("%d",&n1);
	int a[n1];
	printf("Enter the %d numbers for 1st array:",n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of element for 2nd array:");
	scanf("%d",&n2);
	int b[n2];
	printf("Enter the %d numbers for 2nd array:",n2);
	for(j=0;j<n2;j++)
	{
		scanf("%d",&b[j]);
	}
	n=n1+n2;
	int c[n];
	printf("Elements of concatenated array:");
	for(k=0;k<n1;k++)
	{
		c[k]=a[k];
	}
	for(k=0;k<n2;k++)
	{
		c[n1++]=b[k];
	}
	for(k=0;k<n;k++)
	{
		printf("%d ",c[k]);
	}
}


