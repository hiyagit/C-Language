#include<stdio.h>
void main()
{ int i,j,n,count=0; 
	printf("Enter the number of element:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{ 
		if(a[i]==1)
			continue;
		else
			count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=1;
			}
		}
		if(count>1)
		{
			printf("\n%d repeated %d times.",a[i],count);
			a[i]=1;
		}
	}
}

