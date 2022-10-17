#include<stdio.h>
#include<string.h>
void main()
{
	int i,k,n;
	char a[5][10],tmp[10];
	printf("Enter the number of string:");
	scanf("%d",&n);
	printf("Enter the string:");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(strcmp(a[i],a[k])>0)
			{
				strcpy(tmp,a[i]);
				strcpy(a[i],a[k]);
				strcpy(a[k],tmp);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nSorted list of string: %s",a[i]);
	}
}


