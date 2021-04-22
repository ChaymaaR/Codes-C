#include<stdio.h>
#include<math.h>
int permu(int* , int* , int*);
int permu(int *a , int *b , int *c)
{
int i;
i=*a;
*a=*b;
*b=*c;
*c=i;
}
main()
{
int a=4,b=2,c=9;
permu(&a,&b,&c);
printf("a=%d , b=%d , c=%d",a,b,c);
}
