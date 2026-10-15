#include<stdio.h>
int main()
{
int age ,marks;
printf("enetr age and marks:");
scanf("%d%d",&age,&marks);
if(age>=18)
{
    if (marks>=40)
printf("eligible");
else
    printf("marks are not enough");
}
else
{
printf("age is below 18");
}
return 0;
}
