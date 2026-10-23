#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int total = 0;

  for (int i = 1; i < argc; i++) {
    char *badchar;
    int value = strtol(argv[i], &badchar, 10);
    if (*badchar != '\0') {
      fprintf(stderr, "Could not parse: %c\n", *badchar);
      return -1;
    }

    total += value;
  }

  printf("Total: %d", total);
  return total;
}
