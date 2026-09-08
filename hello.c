#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float *p = malloc(20 * sizeof *p);

  for (int i = 0; i < 20; i++) {
    *(p + i) = i / 20.0;
  }

  float *new_p = realloc(p, 40 * sizeof *p);

  if (new_p == NULL) {
    printf("Error while realloc");
    return 1;
  }

  p = new_p;

  for (int i = 20; i < 40; i++) {
    *(p + i) = 1 + (i - 20) / 20.0;
  }

  for (int i = 0; i < 40; i++) {
    printf("%f\n", p[i]);
  }

  free(p);
}
