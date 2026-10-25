#include <stdio.h>

int main(void) {
  int random_nums[] = {11, 22, 33, 44};

#pragma omp parallel for
  for (size_t i = 0; i < sizeof random_nums / sizeof random_nums[0]; i++) {
    printf("%d\n", random_nums[i]);
  }
}
