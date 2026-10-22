#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *restrict a, int *restrict b) {
  int t;

  t = *a;
  *a = *b;
  *b = t;
}

int main(void) {
  int x = 10, y = 20;
  printf("x=%d,y=%d\n", x, y);
  swap(&x, &y);
  printf("x=%d,y=%d\n", x, y);
  swap(&x, &x); // violation
  printf("x=%d,y=%d\n", x, y);
}
