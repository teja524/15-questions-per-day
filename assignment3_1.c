#include<stdio.h>
int main()
{
int i,n,result=0;
printf("enter the numberyou want to add upto the sum to \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if (i%5==0)
{
continue;
}
result+=i;
}
printf("sum of the number of %d excluding nmbers divisible by 5 is: %d",n,result);
return 0;
}

