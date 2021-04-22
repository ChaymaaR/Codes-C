#include<stdio.h>
main() {
int a, b, tmp;
printf("Donnez deux entiers \n");
scanf("%d%d", &a, &b);
printf("Avant l'echange a=%d, b=%d\n", a, b);
tmp = a;
a = b;
b = tmp;
printf("Apres l'echange a=%d, b=%d\n", a, b);
}