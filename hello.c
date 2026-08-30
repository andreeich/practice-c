#include <_printf.h>

void print_2d_array(int a[2][3]);
void print_2d_array(int a[][3]);
void print_2d_array(int (*a)[3]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

  print_2d_array(a);
}
