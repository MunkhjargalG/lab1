#include<stdio.h>
int a,b,c ,d,e=0;

main ()
{
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a%3==0){e=e+1;}
 if(b%3==0){e=e+1;}
 if(c%3==0){e=e+1;}
if(d%3==0){e=e+1;}
printf("%d", e);
}
