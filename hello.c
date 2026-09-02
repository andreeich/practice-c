#include <stdio.h>

typedef struct {
  int x, y;
} point;

int main(void) {
  point p = {.x = 1, .y = 2};

  printf("%d %d\n", p.x, p.y);
}
