#include<stdio.h>
int a,b,c ,d,e=0;

main ()
{
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a%11!=0){e=e+a;}
 if(b%11!=0){e=e+b;}
 if(c%11!=0){e=e+c;}
 if(d%11!=0){e=e+d;}

printf("%d", e);
}
