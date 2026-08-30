#include <_printf.h>

void increment(int *p) { *p = *p + 1; }

int main(void) {
  int i = 10;
  int *p = &i;

  printf("i is %d\n", i);
  printf("i is also %d\n", *p);

  increment(p);

  printf("i is %d\n", i);
}
