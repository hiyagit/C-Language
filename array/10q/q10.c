#include<stdio.h>
void main()
{int i,n,j=0,k=0;
	int b[n],c[n];
	printf("Enter the number of element:");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		{
			b[j]=ar[i];
			j++;
		}
		else
		{
			c[k]=ar[i];
			k++;
		}
	}
	printf("\nEven elements of array are:");
       for(i=0;i<j;i++)
       {	
	printf("%d ",b[i]);
       }
       printf("\nOdd elements of array are:");
       for(i=0;i<k;i++)
       {
	printf("%d ",c[i]);
       }	
}

