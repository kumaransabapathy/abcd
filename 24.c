#include<stdio.h>
int main()
{
 int a,b,temp;
 printf("\n enter the value of a");
 scanf("%d",&a);
 printf("\n enter the value of b");
 scanf("%d",&b);
 temp=a;
 a=b;
 b=temp;
 printf("\n the value of a is %d",a);
 printf("\n value of b is %d",b);
}
