#include <float.h>
#include <stdio.h>

int main(void) {
  float a = 3.14159;
  float b = 0.00000265358f;

  printf("%.5f\n", a);
  printf("%.11f\n", b);

  a += b; // 3.14159265358

  printf("%.11f\n", a);
}
