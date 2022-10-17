#include<stdio.h>

void main()
{ int i,j;
	char s[20];
	printf("Enter any string: ");
	scanf("%s",s);
	for(i=0;s[i]!=0;i++)
	{
		for(j=i;s[j]!=0;j++)
		{
			printf("%c",s[j]);
		}
		for(j=0;j<i;j++)
		{
			printf("%c",s[j]);
		}
		printf(" ");
	}
}
