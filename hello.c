#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *s = "3490";
  unsigned long int i = strtoul(s, NULL, 10);
  printf("%lu", i);
}
