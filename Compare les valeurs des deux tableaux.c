#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int t1[10],t2[10],*p,*k,a;
char e[10];
p=t1;
printf("donnez la dimension du tab");
scanf("%d",&a);
for(p=t1;p<t1+a;p++)
{
printf("donnez les valeurs t1[%d]=",p-t1+1);
scanf("%d",p);
}
p=t2;
for(p=t2;p<t2+a;p++)
{
printf("donnez les valeurs t2[%d]=",p-t2+1);
scanf("%d",p);
}
for(p=t1,k=t2;p<t1+a,k<t2+a;p++,k++)
{
if(*p!=*k)
{
strcpy(e,"faux");
break;
}
else
{
strcpy(e,"vrai");}
}
}
printf("%s",e);
getch();
}
