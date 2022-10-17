#include<stdio.h>
#define function                   //# preprocessor use
#define func(a,b) a##b             //## preprocessor use
char func1()
	{
		printf("In function 1");
	}
char func2()
	{
		printf("In function 2");
	}

int main()
{int ab=3;
	printf("%d\n",func(a,b));
#ifdef function                   //conditional compilation
	func1();
#else
	func2();
#endif
	return 0;
}


