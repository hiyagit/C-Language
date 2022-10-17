#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int str[100];
    int i,n;
    int *ptr;
    printf("how many elements you want=");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof (int));
    if(ptr==NULL)
      {
           printf("there is no memory allocation");
       }
     else
       {
                printf("memory is success");
		for(i=1;i<=n;i++)
                 {
                       printf("%d",*ptr+i);
                  }
       }
   
}
