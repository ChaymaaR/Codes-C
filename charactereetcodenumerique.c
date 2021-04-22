#include<stdio.h>
main() {
int C;
printf("Introduire un caractère \n");
C = getchar();
printf("Le caractère %c a le code ASCII %d\n", C, C);
}