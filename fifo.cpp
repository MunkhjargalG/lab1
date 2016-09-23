#include<stdio.h>
#include<conio.h>
int n,i;
int a[10000];
main ()
{

 a[1]=0;
 a[2]=1;
printf("n=");
scanf("%d",&n);
for(i=3;i<=n;i++){
a[i]=a[i-1]+a[i-2];
}

printf("%d\t",a[n]);


}
