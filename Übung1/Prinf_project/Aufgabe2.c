#include <stdio.h>

int  globalfunction(int x, int y)
{
  int z;
  printf("x=%d y=%d z=%d\n",x, y, z);
  z=x-y;
}

int  globalfunction2()
{
  unsigned int sth=1;
  printf("sth=%u\n",sth);
}

void main()
{
  int i= 111111;
  int j=-222222;
  int k= 333333;
  float f=2.3;
  int l= 444444;

  char myString[] = "C";
  printf("Hallo %s!\n", myString);
  printf("Die ganze Zahl %d mit Vorzeichen %+d und als hex %x und %X.\n", i,i,i,i);
  printf("Die ganze Zahl %d mit Vorzeichen %+d und als hex %x und %X.\n", j,j,j,j);
  printf("Eine Gleitkommazahl ohne Formatierung %f und mit 2 Nachkommastellen %.2f.\n",f,f);

  globalfunction2();
  globalfunction(1,2);
  globalfunction(1,2);
  globalfunction2();
}


