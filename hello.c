#include <_printf.h>

int main(void) {
  int arr[5] = {1, 2, 3, 4, 5};
  int *p;

  p = &arr[0];
  printf("address of arr is %p\n", (void *)p);
  p = arr;
  printf("address of arr is %p\n", (void *)p);
}
