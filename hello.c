#include <stdio.h>

int main(void) {
  FILE *fp;
  unsigned short v = 0x1234;

  fp = fopen("hello.bin", "wb");

  fwrite(&v, sizeof(short), 1, fp);

  fclose(fp);
}
