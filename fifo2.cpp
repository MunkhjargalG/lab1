#include<stdio.h>
#include<conio.h>
int n,i;
int a[10000];
main ()
{

 a[1]=0;
 a[2]=1;
 a[3]=2;
printf("n=");
scanf("%d",&n);
for(i=4;i<=n;i++){
a[i]=a[i-1]+a[i-2]+a[i-3];
}

printf("%d\t",a[n]);


}
