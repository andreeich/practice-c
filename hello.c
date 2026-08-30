#include <stdio.h>
#include <string.h>

int main(void) {
  char s[] = "Hello \0world!"; // explicit terminator
  printf("\"%s\" is %zu bytes long", s, strlen(s));
}
