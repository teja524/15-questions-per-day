#include<stdio.h>
int main()
{
int a, i=1,b=0;
printf("enter the value of a \n");
scanf("%d",&a);
while (i<=a)
{
if(i % 2!=0)
{
b+=i;
}
i++;
}
printf("%d",b);
return 0;
}

