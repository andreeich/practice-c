#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

void set_speed(struct car *c, int speed) { c->speed = speed; }

int main(void) {
  struct car saturn = {.name = "Honda Civik", .price = 123.123};

  set_speed(&saturn, 120);

  printf("Name: \t%s\n", saturn.name);
  printf("Price: \t%f\n", saturn.price);
  printf("Speed: \t%d\n", saturn.speed);
}
