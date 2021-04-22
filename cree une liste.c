#include <stdio.h>
#include <stdlib.h>
struct Page {int val; struct Page *suivant; };
struct Page *premier;
int i;
void lire(void)
{struct Page *precedent, *nouveau;
premier = ( struct Page * )malloc(sizeof(struct Page));
puts("entrez votre premier entier");
scanf("%d",&premier->val);
precedent = premier;
i=0;
while (i<3){
nouveau = ( struct Page*)malloc(sizeof(struct Page));
precedent->suivant = nouveau;
precedent = nouveau;
puts("\nentrez votre entier");
scanf("%d",&nouveau->val);
i++;}
precedent->suivant = NULL;
void afficher(struct Page *debut)
{printf("\nliste : ");
while(debut != NULL)
{printf("%d ",debut->val);
debut = debut->suivant;}
printf("\n");}
int main(void)
{lire();
afficher(premier);}


