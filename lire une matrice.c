#include <stdio.h>
#define Ligne 50 #define Colonne 50
main() 
{int T[Ligne][Colonne],i,j;
for(i=0;i<Ligne;i++)
for(j=0; j<Colonne; j++)
{printf("T[%d][%d]:=\n",i,j);
scanf("%d",&T[i][j]);}}
