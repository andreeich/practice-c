#include <stdio.h>

int foo(void); // This is the prototype

int main(void) {
  int i;
  i = foo();
  printf("%d\n", i);
}

int foo(void) { return 3490; }
