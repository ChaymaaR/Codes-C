#include <stdio.h> 
 void MIN (float, float, float *); 
int main() { 
float x=21.0, y=5.0, z; 
 MIN(x,y,&z); 
 printf("Min est = %.2f ", z); 
 return 0;  } 
 void MIN (float x, float y, float *z) 
 { if(x<y) *z=x; 
