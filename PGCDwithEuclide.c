#include<stdio.h>
main() {
int choix, a, b, tmp, r;
printf("Donnez deux entiers svp \n");
scanf("%d%d", &a, &b);
if (b > a) {
tmp = a;
a = b;
b = tmp;
r = a % b;
while (r > 0) {
a = b;
b = r;
r = a % b;
}
printf("Le pgcd est %d \n", b);
return EXIT_SUCCESS;
}