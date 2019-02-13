
#include <stdio.h>
void main()
{
int num,rem,rev=0;
printf("enter the num");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("the rev is %d",rev);
}
