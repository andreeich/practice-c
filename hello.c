#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *const *p;
  char a = 'c';
  char *b = &a;
  p = &b;
  *p = b;
  **p = *b;
}
