#include<stdio.h>
int t[10]={4,6,1,9,3,10,5,13,7,8};
void tri(int, int *);
void tri(int n, int *T)
{int i,j,tmp;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++)
{ if (T[i] > T[j]) 
 {  tmp= *(T+i); 
*(T+i) = *(T+j); 
*(T+j)=tmp;  }}}}
main()
{int i;
tri(10,t);
printf(" Voici le tableau trié par orde croissant: \n");
for(i=0;i<10;i++)printf(" %d\n",*(t+i));}
