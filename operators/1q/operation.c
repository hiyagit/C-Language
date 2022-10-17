#include<stdio.h>

int main()
{ int a,b,add,sub,mul,mod;
  float div;
	printf("Enter any two whole numbers a and b:");
	scanf("%d%d",&a,&b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	div =(float) a/b;
	mod = a%b;
	printf("\nAddition of %d and %d gives:%d",a,b,add);
	printf("\nSubtraction of %d and %d gives:%d",a,b,sub);
	printf("\nMultiplication of %d and %d gives:%d",a,b,mul);
	printf("\nAfter division of %d and %d, quotient is:%f",a,b,div);
	printf("\nAfter division of %d and %d, remainder is:%d\n",a,b,mod);

	return 0;
}
