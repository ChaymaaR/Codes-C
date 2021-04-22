#include<stdio.h>
#define LGMAX 81
main()
{ char nomfich[21] ; 
FILE * entree ;
int num = 1;
char ligne [LGMAX] ; 
printf ("donnez le nom du fichier à lister : ");
scanf ("%20s", nomfich) ;
entree = fopen (nomfich, "r");
printf (" **** liste du fichier %s ****\n", nomfich) ;
while ( fgets (ligne, LGMAX, entree) )
{ printf ("%5d ", num++) ;
printf ("%s", ligne) ;}
fclose(entree) ;}
