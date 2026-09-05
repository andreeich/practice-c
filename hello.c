#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = calloc(10, sizeof(*p));

  if (p == NULL) {
    printf("Error allocating 10 ints!");
  }

  p = realloc(p, sizeof(*p) * 20);

  for (int i = 0; i < 20; i++) {
    printf("%d\n", p[i]);
  }

  free(p);
}
