#include <stdio.h>
void main()
{
int hour;
printf("12 MIDNIGHT");
printf("\n");
for(hour=1;hour<12;hour++)
	{
		printf("%dAM",hour);
		printf("\n");
	}
printf("12 NOON");
printf("\n");
for(hour=1;hour<12;hour++)
	{
		printf("%dPM",hour);
		printf("\n");
	}
}
