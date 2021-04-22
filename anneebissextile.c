#include<stdio.h>
main() {
int a;
printf("Entrez une année :\n");
scanf("%d",&a);
if ((a%4!=0) || ((a%100 == 0)&& (a%400!=0)))
printf("Ce n'est pas une année bissextile !\n");
else
printf("C'est une année bissexstile !");
}