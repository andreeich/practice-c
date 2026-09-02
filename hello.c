#include <stdio.h>

int main(void) {
  int a[5] = {1, 2, 3, 4, 5};
  int *p = &a[0];

  printf("%d\n", *p);
  printf("%d\n", *(p + 0));
  printf("%d\n", *(p + 1));
}
