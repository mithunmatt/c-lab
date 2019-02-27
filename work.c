#include <stdio.h>
void main()
{
int time;
printf("enter the time required for completing the work");
scanf("%d",&time);
if(time>=5)
{
	printf("You are not eligible for work.You are terminated");
}

if(time>=4)
{
	if(time<5)
	{	
		printf("You should attend the training in order to improve your ability");
	}
}	
if(time>=3)
{
	if(time<4)
	{
		printf("You must improve your speed");
	}
}
if(time>=2)
{
	if(time<3)	
	{
	printf("You are highly efficient");
	}
}
}
