#include<stdio.h>
int a,b,c ,d,e;

main ()
{
scanf("%d",&a);
b=a/3600;
c=a%3600;
d=c/60;
e=a-b*3600-d*60;

printf("%d %d %d",b,d,e);///testing


}
