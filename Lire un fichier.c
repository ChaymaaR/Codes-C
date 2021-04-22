#include<stdio.h>
main()
{
char nomfich[21]="ana" ;
int i ;
int val[5]={2,5,6,7,8};
FILE * sortie ;
sortie=fopen(nomfich,"w");
for(i=0;i<5;i++)
fprintf(sortie,"%d",val[i]);
fclose(sortie);
}
