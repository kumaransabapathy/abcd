#include<stdio.h>

int main(void)

{

int n,i,count=0;

scanf("%d",&n);

for(i=2;i<=n/2;i++)

{

if(n%i==0)

{

count=1;

break;

}

}

if(count==0)

{

printf("no");

}

else

{

printf("yes");

}

return 0;

}return 0;
]
]
]
