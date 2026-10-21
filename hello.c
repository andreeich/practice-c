#include <float.h>
#include <stdio.h>

int main(void) {
  float f = 1.1;
  char s[10];

  sprintf(s, "%f", f);
  printf("%s", s);
}
