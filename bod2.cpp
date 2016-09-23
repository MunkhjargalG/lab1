#include<stdio.h>
#include<conio.h>
int n,i=1, s=0, f=1;

main ()
{
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i++){
s=s+i;
f=f*i;
}

printf("bux tooni niilber ni:%d\t",s);
printf("bux tooni urjwer ni:%d\t",f);

}
