#include<stdio.h>
int a,b,c ,d,e=1;

main ()
{
scanf("%d%d%d",&a,&b,&c);
if(a%2==1){e=e*a;}
 if(b%2==1){e=e*b;}
 if(c%2==1){e=e*c;}
 
printf("%d", e);
}

