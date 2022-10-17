#include<stdio.h>

int main()
{ int p,r,t;
	float si;
	printf("Enter the Principal amount here:");
	scanf("%d",&p);
	printf("\nEnter the Time period here:");
	scanf("%d",&t);
	printf("\nEnter the Rate of interest:");
	scanf("%d",&r);

	si = (p*r*t)/100;
	printf("\nSimple interest is %.2f\n",si);
	return 0;
}
