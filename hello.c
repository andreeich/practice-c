#include <stdio.h>

void writeBin(void) {
  int a[] = {1, 2, 3, 4};

  FILE *fp = fopen("input.bin", "w");

  for (int i = 0; i < 4; i++) {
    fputc(a[i], fp);
  }

  fclose(fp);
}

int main(void) {
  unsigned char input[] = {
#embed "input.bin" limit(3)
  };

  for (size_t i = 0; i < sizeof input; i++) {
    printf("%c", input[i]);
  }
}
