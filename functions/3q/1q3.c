#include<stdio.h>
void swap(int,int);
void main()
{ int a,b;
	printf("Enter value of a and b:");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("\nAfter swapping value of a and b:%d, %d.\n",a,b);
}
void swap(int a,int b)
{ int tmp;
	tmp=a;
	a=b;
	b=tmp;
	printf("\nInside the swap function a and b are:%d, %d",a,b);
}
