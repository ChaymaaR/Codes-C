#include<stdio.h>
int n,T[10],cpt,a,p;
main()
{
printf("donner la puissance\n");
scanf("%d",&n);
printf("donner votre entier\n");
scanf("%d",&a);
for(cpt=0;cpt<n;cpt++)
T[cpt]=a;
p=1;
for(cpt=0;cpt<n;cpt++)
p=p*T[cpt];
printf("Le resultat est %d ",p);
}
