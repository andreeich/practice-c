#include <stdio.h>

#define PRINT_INT_VAL(x) printf("%s = %d", #x, x)

int main(void) {
  int a = 4;
  PRINT_INT_VAL(a);
}
