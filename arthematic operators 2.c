#include<stdio.h>
int main()
{
int a,b;
printf("enter two integers:");
scanf("%d%d",&a,&b);
printf("greater than:%d>%d=%d\n",a,b,a>b);
printf("less than:%d<%d=%d\n",a,b,a<b);
printf("greater than or equal:%d>=%d=%d\n",a,b,a>=b);
printf("less than or equal:%d<=%d=%d\n",a,b,a<=b);
printf("equal:%d=%d=%d\n",a,b,a=b);
printf("not equal:%d!=%d=%d\n",a,b,a!=b);
return 0;
}
