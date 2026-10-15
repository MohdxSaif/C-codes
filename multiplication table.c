#include<stdio.h>
int main()
{
int n,i=1;
printf("enter a number:");
scanf("%d",&n);
do
{
printf("%dx%d=%d\n",n,i,n*i);
i++;
}
while(i<=10);
return 0;
}
