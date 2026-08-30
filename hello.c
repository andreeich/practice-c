#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

int main(void) {
  struct car saturn = {.name = "Honda Civik", .price = 123.123};

  printf("Name: \t%s\n", saturn.name);
  printf("Price: \t%f\n", saturn.price);
  printf("Speed: \t%d\n", saturn.speed);
}
