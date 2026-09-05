#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p;

  if ((p = malloc(sizeof(*p) * 10)) == NULL) {
    printf("Error allocating 10 ints!");
  }

  *p = 4;

  printf("%d\n", *p);

  free(p);
}
