#include<stdio.h>
#include<conio.h>
main()
{
int *p1,*p2,j;
int x,t[10],n;
p1=t;
printf("donner la dimension du tableau");
scanf("%d",&n);
for(p1=t;p1<t+n;p1++)
{
printf("donner la valeur de t[%d]",p1-t);
scanf("%d",p1);}
printf("dooner la valeur");
scanf("%d",&x);
j=0;
p1=t;
for(p1=t;p1<t+n;p1++)
{
if(*p1==x)
{
for(p2=p1;p2<t+n;p2++)
{
 if(*p2!=x)
{
 *p1=*p2;
*p2=x;
p2=t+n-1;
j=j+1;
}
}
}
}
p1=t;
for(p1=t;p1<t+j;p1++)
{ printf(" %d \t",*p1);}
getch();
}
