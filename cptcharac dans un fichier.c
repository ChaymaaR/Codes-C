#include <stdio.h> 
void main() 
{ FILE * fic; 
char c; 
 int x=0 ; 
 fic = fopen("texte.txt","r");
 while((c=fgetc(fic)) != EOF) 
 {  ++x ; 
printf("%c\n",c);  } 
 printf("%d\n",x); 
fclose(fic) ; }
