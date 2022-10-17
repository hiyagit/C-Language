#include<stdio.h>
void main()
{int a,n,m=0,tmp=0;
	printf("Enter any number:");
	scanf("%d",&n);
	tmp=n;
	while(n>0)
	{
		a=n%10;
		m=(m*10)+a;
		n/=10;
	}
	if(m==tmp)
		printf("\nNumber is Palindrome.\n");
	else
		printf("\nNumber is not a Palindrome.\n");
}
