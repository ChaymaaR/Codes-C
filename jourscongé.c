#include<stdio.h>
intmain() {
	intage, anciennete, cadre, conge;
printf("Saisir l'age et l'anciennete de la personne : \n");
scanf("%d%d", &age, &anciennete);
printf("Est-elle cadre ? Donner 1 pour Oui et 0 pour Non : \n");
scanf("%d", &cadre);
if (anciennete< 12)
conge = anciennete * 2;
else {
conge = 28;
if (cadre) {
if (age>= 35 &&anciennete>= 3 * 12)
conge += 2;
if (age>= 45 &&anciennete>= 5 * 12)
conge += 4;
}
}
printf("Nombre de jours de conges : %d\n", conge);
}