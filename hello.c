#include <_printf.h>

int main(void) {
  char s[] = "Hello world!";
  for (int i = 0; i < 13; i++) {
    printf("%c", s[i]);
  }
}
