#include<stdio.h>
void main()
{ int i,j,n;
	printf("Enter the limit:");
	scanf(" %d",&n);
	printf("Prime numbers till %d: ",n);
	for (i=1;i<=n;i++)
	{
		int count=0;
	
		for(j=i;j>0;j--)
		{
			if(i%j==0) 
			{
				count++;
			}

		}

		if(count==2)
			printf(" %d ",i);
	}
	
}

