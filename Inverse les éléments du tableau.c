#include<stdio.h>
#include<conio.h>
main()
{int t[10],*p1,*p2,n,aide,i;
printf("donnez la dimension du tab");
scanf("%d",&n);
p1=t;
for(i=0;i<n;i++)
{printf("donnez les valeurs t[%d]=",i);
scanf("%d",p1+i);}
p2=t+n-1;
while (p1<p2)
{
aide=*p1;
*p1=*p2;
*p2=aide;
p1++;
p2--;
}
for(i=0;i<n;i++)
printf("t[%d]=%d",i,t[i]);
}
