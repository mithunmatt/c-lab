



#include <stdio.h>
void main()
{
int num,num2,rem,sum=0;
printf("enter the num");
scanf("%d",&num);
num2=num;
while(num>0)
{
rem=num%10;
sum=sum+rem*rem*rem;
num=num/10;
}
if(sum==num2)
	{
	printf("num %d is amstrong",num2);
	}
else
	printf("num %d is not amstrong",num2);
}
