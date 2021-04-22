#include <stdio.h>
int a,r=1;
main (){
printf("donner un entier : ");
scanf("%d",&a);
while(a>1){
r=r*a;
a--;}
printf("le resultat est : %d",r);}
