#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct len_string {
  int length;
  char data[0];
};

int main(void) {
  struct len_string *s = malloc(sizeof(struct len_string));

  strcpy(s->data, "Hello, world!");

  printf("%s", s->data);
}
