#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *s = "34x90";
  char *badchar;
  unsigned long int i = strtoul(s, &badchar, 10);
  printf("%lu\n", i);
  printf("Invalid character: %c\n", *badchar);
}
