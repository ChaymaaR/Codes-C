#include <stdio.h>
int i,a,p,n;
main()
{printf("donner un entier p= ");
scanf("%d",&p);
printf("donner un entier n pour calculer la puissance de p , n= ");
scanf("%d",&n);
{if (n==0)
a=1;
printf("la puissance de p^n est egale a:%d ",a);
a=1;
for(i=0;i<n;i++)
a=a*p;
printf("la puissance de %d^%d = %d",p,n,a);}}
