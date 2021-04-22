#include<stdio.h>
int a,b,Z,Y,c;
main()
{
printf("Donner la valeur de a\n");
scanf("%d",&a);
printf("donnez la valeur de b\n");
scanf("%d",&b);
Z=a;
Y=b;
c=a%b;
while(c!=0)
{
a=b;
b=c;
c=a%b;
}
printf("le pgcd de %d et de %d est %d\n",Z,Y,b);
}
