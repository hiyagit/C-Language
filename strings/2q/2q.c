#include<stdio.h>
#include<string.h>
int rev_string(char [40],int,int);
void main()
{int size;
	char a[40];
	printf("Enter any string:");
	gets(a);
	puts(a);
	size=strlen(a);
	printf("\nSize: %d",size);
	rev_string(a,0,size-1);
	printf("\nReversed string: ");
	puts(a);
}
int rev_string(char a[40],int n,int size)
{char tmp;
	tmp=a[n];
	a[n]=a[size-n];
	a[size-n]=tmp;
	if(n==size/2)
	{
		return a;
	}
	return rev_string(a,++n,size);
}
