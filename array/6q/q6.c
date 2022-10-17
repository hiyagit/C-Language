#include<stdio.h>
int main()
{ int n,i,j,tmp;
	printf("Enter the number of element:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("Largest element: %d",a[n-1]);
	printf("\nSecond largest element: %d",a[n-2]);
	printf("\nSmallest value: %d",a[0]);
	printf("\nSecond smallest value: %d\n",a[1]);

	return 0;
}
