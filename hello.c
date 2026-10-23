#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *val = getenv("HERDR_ENV");
  if (val == NULL) {
    printf("Cannot find the HERDR_ENV variable!\n");
    return EXIT_FAILURE;
  }
  printf("Value: %s\n", val);
}
