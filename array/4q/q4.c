#include<stdio.h>
int main()
{ int i,j,n,tmp;
	printf("Enter the number of element:");
	scanf("%d",&n);
	int ar[n];
	//int sz=sizeof(ar)/4;
	printf("Enter the %d numbers:",n);
	for(i=0;i<n;i++)
	{scanf("%d",&ar[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		tmp=ar[i];
		ar[i]=ar[j];
		ar[j]=tmp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}

	return 0;
}
