#include <stdio.h>

int main(void) {
  FILE *fp;
  unsigned char c;
  int count = 0;

  fp = fopen("hello.bin", "rb");

  while (fread(&c, sizeof(char), 1, fp) > 0) {
    printf("%x ", c);
    if (++count % 3 == 0) {
      printf("\n");
    }
  }

  fclose(fp);
}
