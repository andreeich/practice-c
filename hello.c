#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 6;
  char s[1] = {i + '0'};
  printf("%c", *s);
}
