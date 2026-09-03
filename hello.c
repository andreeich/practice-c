#include <stdio.h>
#include <string.h>

void *new_memcpy(void *dest, void *src, int byte_count) {
  char *d = dest, *s = src;
  while (byte_count--) {
    *d++ = *s++;
  }
  return dest;
}

struct animal {
  char *name;
};

int main(void) {
  struct animal cat = {.name = "Lucy"};
  struct animal dog;

  new_memcpy(&dog, &cat, sizeof cat);

  printf("%s", dog.name);
}
