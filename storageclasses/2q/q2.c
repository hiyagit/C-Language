#include<stdio.h>
void func();
void main()
{auto int x=10;
	func();
	printf("\nx: %d",x);
	func();
}
void func()
{static int x=20;
	x+=5;
	printf("\nx: %d",x);
}
