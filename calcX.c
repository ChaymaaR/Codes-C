#include<stdio.h>
voidmain() {
int n, i;
float x;
double p=1.0;
printf("Entrez un entier n : ");
scanf("%d", &n);
printf("Entrez un reel x : ");
scanf("%f", &x);
for ( i = 1; i <= n; i++)
p *= x;
printf("Le resultat est %f\n",p);
}