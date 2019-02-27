#include <stdio.h>
void main()
{
int lim,i,j;
printf("enter the limit ");
scanf("%d",&lim);
for(i=lim;i>0;i--)
	{
		for(j=i;j>0;j--)
		printf("*");
		printf("\n");	
	}
}




