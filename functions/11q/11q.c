#include<stdio.h>
int indexr(int a[],int,int);
void main()
{int i,n,r;
	printf("Enter the number of element:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number whose rightmost occurance you want:");
	scanf("%d",&r);
	indexr(a,n,r);
}

int indexr(int a[],int n,int r)
{int i,j=0;
	for(i=n-1;i>=0;--i)
	{
		if(a[i]==r)
		{
			printf("\nRightmost occurance of %d is: %d\n",r,j);
			break;
		}
		j++;
	}
}
