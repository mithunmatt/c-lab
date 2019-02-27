#include <stdio.h>
void main()
{
int ram ,shyam,ajay,young;
printf("enter the age of ram,shyam,ajay");
scanf("%d%d%d",&ram,&shyam,&ajay);
if (ram<shyam)
{
	if(ram<ajay)
	{
		young=ram;
		printf("ram is youngest");
	}
	else
	{
		young=ajay;
		printf("ajay is youngest");
	}
}
if(shyam<ram)
{
	if(shyam<ajay)
	{
		young=shyam;
		printf("shyam is youngest");
	}
	else
	{
		young=ajay;
		printf("ajay is youngest");
	}
}
}



