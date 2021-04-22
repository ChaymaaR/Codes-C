#include <stdio.h>
main()
{
char nomfich[21] ;
int i ;
FILE * sortie ;
printf ("nom du fichier à créer : ") ;
scanf ("%20s", nomfich) ;
sortie = fopen (nomfich, "w") ;
for(i=0;i<=100;i++)
fwrite(&i, sizeof(int), 1, sortie) ;
fclose (sortie) ;
}
