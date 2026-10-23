#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int total = 0;

  (void)argc;

  for (char **p = argv + 1; *p != NULL; p++) {
    char *badchar;
    int value = strtol(*p, &badchar, 10);
    if (*badchar != '\0') {
      fprintf(stderr, "Could not parse: %c\n", *badchar);
      return EXIT_FAILURE;
    }
    total += value;
  }

  printf("Total: %d", total);
  return EXIT_SUCCESS;
}
