#include<stdio.h>
#define LGNOM 20
#define LGPRENOM 15
#define LGTEL 11
typedef struct {
char nom [LGNOM+1] ;
char prenom [LGPRENOM+1] ;
int age ;
char tel [LGTEL+1] ;}
Bloc ;
main(){
char nomfich[21] ;
FILE * sortie ;
Bloc b;
printf ("donnez le nom du fichier à créer : ");
gets (nomfich) ;
printf (" Veuillez introduire les personnes devotre repertoirepour finir la saisie, donnez un nom 'vide' \n") ;
while ( printf ("nom : "), gets (b.nom),
strlen(b.nom) )
{
printf ("prénom : ") ;
gets (b.prenom) ;
printf ("age : ") ;
scanf ("%d", &b.age) ;
printf ("téléphone : ") ;
gets (b.tel) ;
fwrite (&b, sizeof(Bloc), 1, sortie) ;
}
fclose (sortie) ;}


