#include<stdio.h>
int n,p,i,T[10],a;
main()
{
printf("Donnez moi la dimension de votre tableau");
scanf("%d",&n);
printf("donnez les elements du tableau\n");
for(i=0;i<n;i++)
{
printf("T[%d]=",i);
scanf("%d",&T[i]);
}
a=T[0];
for(i=1;i<n;i++)
{
if(T[i]<a)
a=T[i];
}
printf("%d\n",a);
}
