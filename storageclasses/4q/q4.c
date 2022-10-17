#include<stdio.h>
void main()
{
	register int x=10;
	{auto int x;
		printf("x: %d",x);
	}
	printf("\nx: %d",x);
	{
		auto int x=5;
		printf("\nx: %d",x);
	}
	{register int x;
		printf("\nx: %d",x);
	}
}
