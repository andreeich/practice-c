#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *s = "34x90";
  char *badchar;
  unsigned long int i = strtoul(s, &badchar, 10);
  printf("%lu\n", i);

  if (*badchar == '\0') {
    printf("All good!\n");
  } else {
    printf("Invalid character: %c\n", *badchar);
  }
}
