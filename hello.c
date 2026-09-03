#include <stdio.h>
#include <string.h>

int main(void) {
  char a = 'X';
  void *p = &a;
  char *q = p;

  printf("%c\n", *q);
}
