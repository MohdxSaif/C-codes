#include<stdio.h>
int main()
{
char op;
float a,b;
printf("enter operator(+,-,*,/):");
scanf("%c",&op);
printf("enter the number:");
scanf("%f%f",&a,&b);
switch(op)
{
case'+':
printf("result=%.2f\n",a=b);
break;
case'-':
printf("result=%.2f\n",a-b);
break;
case'*':
printf("result=%.2f\n",a*b);
break;
case'/':
if(b!=0)
printf("result=%.2f\n",a/b);
else
printf("division by zero not allowed.\n");
break;
default:
printf("invalid operator.\n");
}
return 0;
}
