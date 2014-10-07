#include <stdio.h>
#include <math.h>

#define BETRAG(x,y) sqrt(((x)*(x))+((y)*(y)))

void main (){
float f = 0;
float g = 0;
g = BETRAG(3,4);
f = BETRAG(1+3,2+1);
printf("%.3f\n",g);
printf("%.3f\n",f);
}
