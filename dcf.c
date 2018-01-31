#include<stdio.h>
int main()
{
  int m,cnt=0,temp;
  printf("enter the m value\n");
  scanf("%d",&m);
  while(m!=0)
  {
  	temp=m%10;
  	cnt=temp+cnt;
  	m=m/10;
 
  }
 printf("%d",cnt);
return 0;
}
