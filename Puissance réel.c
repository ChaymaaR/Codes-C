#include <stdio.h>
main()
{
int fonct(double *X, int N);
double A;
int B;
printf("Introduire un réel X : ");
scanf("%lf", &A);
printf("Introduire un entier positif N : ");
scanf("%d", &B);
printf("fonct (%.2f , %d) = ", A, B);
fonct(&A, B);
printf("%f\n", A);
return 0;
}
int fonct(double *X, int N)
{
double AIDE;
for (AIDE=1.0; N>0; N--)
AIDE *= *X;
*X = AIDE;
}
