#include<stdio.h>
int a,b,c ,d,e=1;

main ()
{
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<5){e=e*a;}
 if(b<5){e=e*b;}
 if(c<5){e=e*c;}
 if(d<5){e=e*d;}
printf("%d", e);
}
