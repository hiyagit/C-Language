#include<stdio.h>

int main()
{ char s;
	printf("Enter any charater:");
	scanf("%c",&s);
	if(s=='a'||s=='A')
	{ printf("A for Apple\n");
	}
	else if(s=='b'||s=='B')
	{ printf("B for Bat\n");
	}
	else if(s=='d'||s=='D')
	{ printf("D for Dog\n");
	}
	else if(s=='f'||s=='F')
	{ printf("F for Fan\n");
	}
	else
	{ printf("character is not in the range.\n");
	}
	return 0;
}
