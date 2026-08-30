#include <_printf.h>

int main(void) {
  int i;
  int *p;

  p = &i;

  i = 10;
  *p = 20;

  printf("The value of i is %d\n", i);
  printf("The value of p is %d\n", *p);
  printf("And its address is %p\n", (void *)p);
}
