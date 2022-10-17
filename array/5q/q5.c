#include<stdio.h>
int main()
{ int i,n,sum=0;
	float avg; 
	printf("Enter the number of element:");
	scanf("%d",&n);
	int ar[n];
	//int sz=sizeof(a)/4;
	printf("\nEnter the %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=ar[i];
	}
	printf("\nSum of all elements is %d.",sum);
	avg=(float)sum/n;
	printf("\nAverage of all elements is %f.\n",avg);

	return 0;
}
