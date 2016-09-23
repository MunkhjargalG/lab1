#include<stdio.h>
#include<conio.h>
main ()
{int n,i,s=0 ,f=1;
printf("n=");
scanf("%d",&n);
for(i=1;i<=n;i=i+2){
	s=s+i;
	f=f*i;
}

printf("niilber ni:%d\t",s);

printf("urjwer ni:%d\t",f);
}
