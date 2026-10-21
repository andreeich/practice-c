#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 10;
  void *p = &i;
  int *j = p;
  int k = *j;
  printf("%d\n", k);
}
