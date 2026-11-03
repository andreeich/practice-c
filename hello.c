#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct len_string {
  int length;
  char data[];
};

struct len_string *len_string_from_c_string(char *s) {
  int len = strlen(s);

  struct len_string *ls = malloc(sizeof *ls + len);

  ls->length = len;

  memcpy(ls->data, s, len);

  return ls;
}

int main(void) {
  char *a = "something";

  struct len_string *s = len_string_from_c_string(a);

  printf("%s: %d\n", s->data, s->length);
}
