#include<stdio.h>
intmain(void) {
int h, m, s;
printf("Heure : ");
scanf("%d", &h);
printf("Minute : ");
scanf("%d", &m);
printf("Seconde : ");
scanf("%d", &s);
if (s < 59)
s = s + 1;
else {
s = 0;
if (m < 59)
m = m + 1;
else {
m = 0;
if (h < 23)
h = h + 1;
else
h = 0;
}
}
printf("Apres une seconde le temps est : %02d:%02d:%02d\n", h, m, s);
}