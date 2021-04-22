#include<stdio.h>
main() {
int A, B, C;
printf("Introduisez trois nombres entiers :");
scanf("%d %d %d", &A, &B, &C);
printf("La valeur maximale est ");
if (A > B && A > C)
printf("%d\n", A);
elseif (B > C)
printf("%d\n", B);
else
printf("%d\n", C);
}