#include<stdio.h>
int func1(int,int);
int func2(int,int);
int power(int);
void main()
{int a,n;
	printf("Enter any number a: ");
	scanf("%d",&a);
	printf("Enter the shifting limit: ");
	scanf("%d",&n);
	func1(a,n);
	func2(a,n);
}

int func1(int a,int n)
{int b,c;
	c=a;
	a=a<<n;
	b=power(n);
	c=c*b;
	if(a==c)
	{	printf("Binary number after left shifting: %d\n",a);
	        printf("Binary number after multiplying by 2^n: %d\n",c);
	}
}	
int func2(int a,int n)
{int x,y;
	y=a;
	a=a>>n;
	x=power(n);
	y=y/x;
	if(a==y)
	{	printf("Binary number after right shifting: %d\n",a);
	        printf("Binary number after dividing by 2^n: %d\n",y);
	}
}	
int power(int n)
{ 
	if(n==0)
	{
		return 1;
	}
	else
	{	return 2*power(n-1);
	}
}


