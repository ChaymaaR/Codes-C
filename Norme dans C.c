#include<stdio.h>
#include<math.h>
struct complexe
{
double reelle;
double imaginaire;
};
main()
{
struct complexe z;
double norme;
z.reelle=3;
z.imaginaire=2;
norme=sqrt(z.reelle*z.reelle+z.imaginaire*z.imaginaire);
printf("la norme de (%f=i%f)=%f",z.reelle,z.imaginaire,norme);
}
