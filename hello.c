#include <_printf.h>
#include <stddef.h>

size_t number_of_elements_in_the_array(float f[4]) {
  return sizeof f / sizeof(float);
}

int main(void) {
  float f[4];

  printf("%zu", sizeof f / sizeof(float));
  printf("%zu", number_of_elements_in_the_array(f));
}
