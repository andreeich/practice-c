#include <float.h>
#include <stdio.h>

int main(void) {
  printf("%d %d %d\n", FLT_DIG, DBL_DIG, LDBL_DIG);
  double a = 1.23456789123456789;
  float b = a;
  printf("%.16f\n", a);
  printf("%.16f\n", b);
}
