#include<stdio.h>
main() {
int n, i;
float x;
double p = 1.0, s = 1.0;
printf("Entrez un entier n : ");
scanf("%d", &n);
printf("Entrez un reel x : ");
scanf("%f", &x);
for (i = 1; i <= n; i++) {
p *= x / i;
s += p;
}
printf("Le resultat est %f\n", s);
}