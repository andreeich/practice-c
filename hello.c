#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = malloc(sizeof(*p));

  *p = 4;

  printf("%d\n", *p);

  free(p);
}
