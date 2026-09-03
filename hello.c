#include <stdio.h>

int new_strlen(char *s) {
  char *p = s;

  while (*p != '\0') {
    p++;
  }

  return p - s;
}

int main(void) {
  char *s = "Hello world";
  printf("%d\n", new_strlen(s));
}
