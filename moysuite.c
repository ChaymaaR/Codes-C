#include<stdio.h>
main() {
unsignedint a, s = 0;
unsignedint cpt = 0; // pour calculer le nombre des entiers.
unsignedint max = 0; // Puisque les elements sont postifs on initialise le
max par 0.
do {
printf("Donnez un entier ( 0 pour terminer): \n");
scanf("%d", &a);
s += a;
cpt++;
if (a > max)
max = a;
} while (a);
printf("La Moyenne est %f", (float) s / (cpt - 1));
printf(" le Max est %d", max);
}