#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = malloc(sizeof(*p) * 10);

  if (p == NULL) {
    printf("Error allocating 10 ints!");
  }

  for (int i = 0; i < 10; i++) {
    *(p + i) = i * 5;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", p[i]);
  }

  free(p);
}
