#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *s = "3.14";
  float f;
  f = atof(s);
  printf("%f\n", f);
}
