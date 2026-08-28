#include <_printf.h>

int main(void) {
  int i = 10;
  printf("The value of i is %d\n", i);
  printf("And its address is %p\n", (void *)&i);
}
