#include<stdio.h>
main() {
int A, B;
printf("Introduisez deux nombres entiers : ");
scanf("%d %d", &A, &B);
printf("Division entiere : %d\n", A / B);
printf("Reste : %d\n", A % B);
printf("Quotient rationnel : %f\n", (float) A / B);
}