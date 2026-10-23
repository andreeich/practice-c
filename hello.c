#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(void) {
  for (char **p = environ; *p != NULL; p++) {
    printf("%s\n", *p);
  }
}
