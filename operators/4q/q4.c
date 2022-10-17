#include<stdio.h>

void main()
{ int r,c,r1,r2,r3,c2,c1,c3,m1[20][20],m2[20][20],m3[20][20];
  char s;

  printf("Enter the r1,c1 for first matrix:");
  scanf("%d%d",&r1,&c1);
  printf("Enter the r2,c2 for second matrix:");
  scanf("%d%d",&r2,&c2);

  printf("Enter numbers for first matrix:");
  for(r=0;r<r1;r++)
  {
	  for(c=0;c<c1;c++)
	  {
		  scanf("%d",&m1[r][c]);
	  }
  }
  printf("Enter numbers for second matrix:");
  for(r=0;r<r2;r++)
  {
	  for(c=0;c<c2;c++)
	  {
		  scanf("%d",&m2[r][c]);
	  }
  }
  printf("\nSelet the operation you want:");
  scanf(" %c",&s);

  switch(s)
  {
	case '+':
	  printf("\nSelected operation is Addition.\n");
	  if(r1==r2&&c1==c2)
	  {
		  printf("Addition of two matrices gives:");
		  for(r=0;r<r1;r++)
		  {
			  for(c=0;c<c1;c++)
			  {
				  m3[r][c]=m1[r][c]+m2[r][c];
			  }
		  }
		  for(r=0;r<r1;r++)
		  {
			  printf("\n");
			  for(c=0;c<c1;c++)
			  {
				  printf("%d",m3[r][c]);
			  }
		  }
	  }
	  else
	  {
		  printf("For addition matrix, rows and columns needs to be equal of both matrices.\n");
	  }
	  break;
	case '-':
	  printf("\nSelected operation is Subtraction.\n");
	  if(r1==r2&&c1==c2)
	  {
		  printf("Subtraction of two matrices gives:");
		  for(r=0;r<r1;r++)
		  {
			  for(c=0;c<c1;c++)
			  {
				  m3[r][c]=m1[r][c]-m2[r][c];
			  }
		  }
		  for(r=0;r<r1;r++)
		  {
			  printf("\n");
			  for(c=0;c<c1;c++)
			  {
				  printf("%d",m3[r][c]);
			  }
		  }
	  }
	  else
	  {
		  printf("For subtraction matrix, rows and columns needs to be equal of both matrices.\n");
	  }					 
	  break;
	case '*':
	  printf("\nSelected operation is Multiplication.\n");
	  for(r=0;r<r1,r<r2)
	  break;
	default:
	  printf("\nInvalid option.\n");
  }
}
