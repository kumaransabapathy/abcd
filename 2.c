#include<stdio.h>
int main()
{
	char p[32],count=0,i;
	scanf("%s",p);
	for(i=0;p[i]!=NULL;i++)
	{
	if(p[i]==' ')
	count++;
	}
	printf("%d",count+1);
	}
