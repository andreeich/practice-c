#include <_printf.h>

// all declarations means the same
void double_array(int a[4], int len);
void double_array(int a[], int len);
void double_array(int *a, int len) {
  for (int i = 0; i < len; i++) {
    a[i] *= 2;
  }
}

int main(void) {
  int a[4] = {1, 2, 3, 4};
  double_array(a, 4);

  for (int i = 0; i < 4; i++) {
    printf("%d\n", a[i]);
  }
}
