#include <stdio.h>

int main(void) {
  printf("This this function: %s\n", __FUNCTION__);
  printf("This this file: %s\n", __FILE__);
  printf("This this line: %d\n", __LINE__);
  printf("Compiled on: %s %s\n", __DATE__, __TIME__);
  printf("C Version: %ld\n", __STDC_VERSION__);
}
