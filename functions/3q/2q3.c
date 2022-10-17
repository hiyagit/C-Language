#include<stdio.h>
void swap(int*,int*);
void main()
{int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\nAfter swapping value of a and b are:%d, %d\n",a,b);
}
void swap(int *ptrc,int *ptrd)
{ int tmp;
	tmp=*ptrc;
	*ptrc=*ptrd;
	*ptrd=tmp;
	printf("\nInside the swap function c and d are:%d, %d\n",*ptrc,*ptrd);
}
