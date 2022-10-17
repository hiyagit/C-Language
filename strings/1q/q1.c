#include<stdio.h>
#include<string.h>
void main()
{int i;
	char s[1024];
	printf("Enter any string: ");
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	printf("String after changing lower case to upper case and vice versa: %s\n",s);
}


