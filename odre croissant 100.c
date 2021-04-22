#include <stdio.h> 
#include <stdlib.h> 
struct Page {int val; struct Page *suivant; }; 
struct Page *premier; 
int i, N=100; 
void lire(void) 
{ struct Page *precedent, *nouveau; 
N=100
premier = ( struct Page * )malloc(sizeof(struct Page)); 
premier->val=N; 
precedent = premier; 
i=N-1; 
while (i>0) { 
nouveau = ( struct Page*)malloc(sizeof(struct Page)); 
precedent->suivant = nouveau; 
precedent = nouveau; 
nouveau->val=i; 
i--; } 
precedent->suivant = NULL; } 
void afficher(struct Page *debut) 
{ printf("\n Voici la Liste : "); 
while(debut != NULL) 
{ printf("%d ",debut->val); 
debut = debut->suivant; } 
printf("\n"); } 
int main(void) 
{ lire(); 
afficher(premier); }


