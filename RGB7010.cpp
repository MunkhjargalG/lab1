#include<stdio.h> 

main() 
{ int a,b,c,m,n; 
scanf("%d",&n); 

a=n/100; 
b=(n/10)%10; 
c=n%10; 
m=a+b+c; 

printf("%d\n",m); 

}
