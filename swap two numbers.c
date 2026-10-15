#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter two numbers (a and b):");
scanf("%d%d",&a,&b);
//swapping procces
temp=a;
a=b;
b=temp;
printf("after swapping:a=%d,b=%d",a,b);
return 0;
}
