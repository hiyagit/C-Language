#include<stdio.h>
char to_lower(char s[]);
void main()
{
	char s[20];
	printf("Enter the string:");
	scanf("%s",s);
	to_lower(s);
}

char to_lower(char s[])
{int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
		else
		{
			s[i];
		}
	}
	printf("\nString after changing upper case to lower case: %s\n",s);
}
