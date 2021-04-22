/* Retournez le mot le plus grand suivant l’ordre
Alphanumérique : */
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
struct Page {char mot[20]; struct Page *suivant; }; 
struct Page *premier,*premier2, *premier3,*liste2; 
int i, N=3; 
char t[20]; 
void lire_mots(void) {
struct Page *precedent, *nouveau; 
premier = ( struct Page * )malloc(sizeof(struct Page)); 
printf("un mot--------------->\n"); 
scanf("%s",t); 
strcpy(premier->mot,t); 
precedent = premier; 
i=N-1; 
while (i>0) { 
nouveau = ( struct Page * )malloc(sizeof(struct Page)); 
precedent->suivant = nouveau; 
precedent = nouveau; 
printf("un mot--------------->\n"); 
scanf("%s",t); 
strcpy(precedent->mot,t); 
i--; } 
precedent->suivant = NULL; } 
void afficher_mots(struct Page *debut) 
{  int taille_max=0; 
char mot_max[20]; 
strcpy(mot_max,""); 
printf("\n Voici la Liste : \n"); 
while(debut != NULL) { 
printf("%s\n",debut->mot); 
if(strlen(debut->mot)> taille_max) 

 {  taille_max =strlen(debut->mot) ;
 strcpy(mot_max,debut->mot); } 
debut = debut->suivant; } 
printf("\n"); 
printf("La taille maximale est:%d\n",taille_max); 
printf("Le plus grand mot est:%s\n",mot_max); } 
int main(void) 
{ lire_mots(); 
afficher_mots(premier); }

 /* RETIRER LE PREMIER ELEMENT : */
struct Page* Retirer_premier_element(struct Page *debut){ 
struct Page *debut2; 
debut2=debut->suivant; 
return (debut2); }
APPEL A LA FONCTION :
int main(void)
{ 
lire(); 
afficher(premier); 
premier3=Retirer_premier_element(premier); 
afficher(premier3);}
 
 /* RETIREZ LE DERNIER ELLEMENT : */
struct Page* Retirer_dernier_element(struct Page *debut)
{ struct Page *precedent,*debut4; 
if(debut->suivant==NULL) return NULL; 
debut4=debut; 
precedent=debut; 
while(debut->suivant != NULL) 
{ precedent=debut; 
debut = debut->suivant; } 
precedent->suivant=NULL; 
return (debut4); }
 /* APPEL A LA FONCTION : */
int main(void) 
{ lire(); 
afficher(premier); 
premier4=Retirer_dernier_element(premier); 
afficher(premier4); }

