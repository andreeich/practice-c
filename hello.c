#include <stdio.h>

int main(void) {
  FILE *fp;
  unsigned char bytes[] = {
      0xe3, 0x82, 0xa1, // ァ
      0xe3, 0x83, 0x8d, // ネ
      0xe3, 0x83, 0x87, // デ
      0xe3, 0x83, 0xac, // レ
      0xe3, 0x82, 0xa4  // イ
  };

  fp = fopen("hello.bin", "wb");

  fwrite(bytes, sizeof(char), sizeof bytes / sizeof(char), fp);

  fclose(fp);
}
