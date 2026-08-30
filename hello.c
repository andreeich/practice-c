#include <_printf.h>

int main(void) {
  int i;
  char j;
  printf("%zu\n", sizeof &i);
  printf("%zu\n", sizeof &j);
}
