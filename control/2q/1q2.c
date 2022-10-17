#include<stdio.h>

void main()
{ char s;
	printf("Enter any character:");
	scanf(" %s",&s);

	switch(s)
	{
	     case 'a':
		printf("A for Apple");
		break;
	     case 'A':
		printf("A for Apple");
		break;
	     case 'b':
		printf("B for Bat");
		break;
	     case 'B':
		printf("B for Bat");
		break;
	     case 'd':
		printf("D for Dog");
		break;
	     case 'D':
		printf("D for Dog");
		break;
	     case 'f':
		printf("F for Fan");
		break;
	     case 'F':
		printf("F for Fan");
		break;
		default:
		printf("Character is not in the range");
	}
}
