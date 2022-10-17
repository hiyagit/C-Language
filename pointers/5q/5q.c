#include<stdio.h>
#include<string.h>
int replace(char *);
void main()
{
	char c[]="The cat sat";
	char *cat;
	cat=c;
	puts(cat);
	printf("\n");
	int n=replace(cat);
	printf("Number of spaces: %d",n);
}
int replace(char *rat)
{int s=0;
	int l=strlen(rat);
	printf("%d\n",l);
	for(int i=0;i<l;i++)
	{
		if(rat[i]==' ')
		{
			rat[i]='-';
			s++;
		}
	}
	puts(rat);
	printf("\n");
	return s;
}
