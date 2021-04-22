
#include<stdio.h>
main() {
int n; 
char nomcpy[21];
char nomsrc[21];
FILE * src;
FILE* cpy;
puts("Donnez le nom du fichier source");
scanf("%20s",nomsrc);
puts("Donnez le nom du fichier copie");
scanf("%20s"nomcpy);
src=fopen(nomsrc,"r");
cpy=fopen(nomcpy,"w");
do{
fread(&n,sizeof(int),1,src);
fwrite(&n,sizeof(int),1,cpy);}
while(!feof(src));
fclose(cpy);
fclose(src);}
