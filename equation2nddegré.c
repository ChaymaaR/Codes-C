#include<stdio.h>
#include<math.h>
main() {
float a, b, c;
double delta; /* Discriminant */
printf("Calcul des solutions réelles d'une équation du second degré: \n");
printf("Introduisez les valeurs pour a, b, et c : ");
scanf("%f %f %f", &a, &b, &c);
delta = b*b - 4*a*c;
/* Distinction des différents cas */
if (a==0 && b==0 && c==0) /* 0x = 0 */
printf("Tout réel est une solution de cette équation.\n");
elseif (a==0 && b==0) /* Contradiction: c # 0 et c = 0 */
printf("Cette équation ne possède pas de solutions.\n");
elseif (a==0) /* bx + c = 0 */
{
printf("La solution de cette équation du premier degré est :\n");
printf(" x = %.4f\n", c/b);
}
elseif (delta<0) /* b^2-4ac < 0 */
printf("Cette équation n'a pas de solutions réelles.\n");
elseif (delta==0) /* b^2-4ac = 0 */
{
printf("Cette équation a une seule solution réelle :\n");
printf(" x = %.4f\n",-b/(2*a));
}
else/* b^2-4ac > 0 */
{
printf("Les solutions réelles de cette équation sont :\n");
printf(" x1 = %.4f\n", (-b+sqrt(delta))/(2*a));
printf(" x2 = %.4f\n", (-b-sqrt(delta))/(2*a));
}
}