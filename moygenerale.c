#include<stdio.h>
main() {
float mg;
printf("Veuillez introduire la moyenne générale de l'etudiant svp \n");
scanf("%f", &mg);
if (mg > 16)
printf("Mention : Tres Bien \n");
elseif (mg > 14)
printf("Mention: Bien \n");
elseif (mg > 12)
printf("Mention: Assez Bien \n");
elseif (mg > 10)
printf("Mention: Passable \n");
else
printf("Echec\n");
}