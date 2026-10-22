#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void counter(void) {
  static int count = 1;
  printf("counter is %d\n", count);
  count++;
}

int main(void) {
  counter();
  counter();
  counter();
  counter();
  counter();
}
