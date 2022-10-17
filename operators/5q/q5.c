#include<stdio.h>

int main()
{ int a,b,c,d;
	printf("\nEnter the real and imaginary parts of 1st complex number:");
	scanf("%d%d",&a,&b);
	printf("\nEnter the real and imaginary parts of 2nd complex number:");
	scanf("%d%d",&c,&d);
	printf("Addition of given complex numbers gives:%d+i%d\n",(a+c),(b+d));
	printf("Subtraction of given complex numbers gives:%d-i%d\n",(a-c),(b-d));
	printf("Multiplication of given complex numbers gives:%d+i%d\n",(a*c),(b*d));
	printf("Division of given complex numbers gives:%f+i%f\n",((float)a/c),((float)b/d));

	return 0;
}

