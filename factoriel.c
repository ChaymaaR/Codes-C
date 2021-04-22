#include<stdio.h>
int fact(int);
int fact(int a)
{
if(a==0)
return(1);
return(a*fact(a-1));
}
main()
{
int a=4;
printf("le fact de a est %d",fact(a));
}
