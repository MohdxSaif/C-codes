#include<stdio.h>
int main()
{
float p,t,r,simpleinterest;
printf ("enter the value of p");
scanf("%f",&p);
printf("enter the value of t");
scanf("%f",&t);
printf("enter the value of r");
scanf("%f",&r);
simpleinterest = (p*t*r)/100 ;
printf("simpleinterest is %f",simpleinterest);
return 0;
}

