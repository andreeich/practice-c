#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = calloc(10, sizeof(*p));

  if (p == NULL) {
    printf("Error allocating 10 ints!");
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", p[i]);
  }

  for (int i = 0; i < 10; i++) {
    *(p + i) = i * 5;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", p[i]);
  }

  free(p);
}
