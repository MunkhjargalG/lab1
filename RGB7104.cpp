#include<stdio.h> 
main () { 
int a,b,c,d; 
scanf("%d %d %d %d",&a,&b,&c,&d); 
if (b>=a&&c>=a&&d>=a)printf("%d",a); 
if (a>=b&&c>=b&&d>=b)printf("%d",b); 
if(a>=c&&b>=c&&d>=c)printf("%d",c); 
if(a>=d&&b>=d&&c>=d)printf("%d",d); 
}
