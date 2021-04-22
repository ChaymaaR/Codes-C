#include<stdio.h>
int n,p,i,T[10],S;
main()
{
printf("Donnez moi la dimension de votre tableau");
scanf("%d",&n);
printf("donnez les elements du tableau");
for(i=0;i<n;i++)
{
printf("T[%d]=",i);
scanf("%d",&T[i]);
}
S=0;
for(i=0;i<n;i++)
S=S+T[i];
printf("La somme est %d",S);
}
