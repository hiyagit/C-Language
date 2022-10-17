#include<stdio.h>
void main()
{ int i,j,c;
	printf("Enter any numbers:");
	scanf("%d%d",&i,&j);
	c=(i>40||j>40)?puts("\nBoth variables are not less than 40."):((20<i<=40)&&(20<j<=40))?puts("\nBoth variables are less than or equal to 40.\n"):((i==20)||(j==20))?puts("\nAtleast one variable is having 20."):puts("\nBoth variables are not having 20.\n");
}
