#include<stdio.h>
int main()
{
int a,b;
printf("enter two integers:");
scanf("%d%d",&a,&b);
printf("addition:%d+%d=%d\n",a,b,a+b);
printf("subtraction:%d-%d=%d\n",a,b,a-b);
printf("multiplication:%d*%d=%d\n",a,b,a*b);
printf("division:%d/%d=%d\n",a,b,a/b);
printf("remainder:%d%%%d=%d\n",a,b,a%b);
return 0;
}
