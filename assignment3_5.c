#include<stdio.h>
int main()
{
int num,i,tem,q,rem,pal=0;
printf("enter a num: ");
scanf("%d",&num);
q=num;
while(num!=0)
{
rem = num%10;
pal =(pal*10)+rem;
num=num/10;
printf("\n%d",pal);
if(pal==q)

printf(" %d is a pal \n",pal);

else 
printf("%d is not a pal \n",pal);
}
return 0;
}
