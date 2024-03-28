#include<stdio.h>
int main()
{
	int a,b,c,sum = 0,x;
	printf("enter the value of armstrong \n");
	scanf("%d",&a);
	x=a;
	while(a>0)
	{
	b=a%10;
	c=b*b*b;
	sum+=c;
	a=a/10;
	}
	if(x==sum)
	{
	printf("the number is armstrong\n");
	}
	else
	{
	printf("the number is not armstrong\n");
	}
	return 0;
}
