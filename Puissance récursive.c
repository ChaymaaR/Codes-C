#include<stdio.h>
int puissance(int , int );
main() {
int n,p,a;
printf("Entrer un entier p= :");
scanf("%d",&p);
printf("Entrer sa puissance n :");
scanf("%d",&n);
a = puissance(p,n);
printf(" %d puissance %d = %d \n",p, n, a);}
int puissance(int p, int n)
{if (n==0)
return 1;
return p*puissance(p,n-1);}
