#include<stdio.h>
int main()
{
int i,N,result =1;
printf("enter the value of the number\n");
scanf("%d",&N);
for(i=N;i>0;i--)
{
result *= i;
}
printf("The factorial of %d is : %d",N,result);
return 0;
}
