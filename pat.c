#include <stdio.h>
void main()
{
int lim,i,j;
printf("enter the limit ");
scanf("%d",&lim);
for(i=1;i<=lim;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");	
	}
}




