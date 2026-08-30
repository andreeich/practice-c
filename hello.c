#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

int main(void) {
  struct car saturn;
  saturn.name = "Honda Civik";
  saturn.price = 123.123;
  saturn.speed = 120;

  printf("Name: \t%s\n", saturn.name);
  printf("Price: \t%f\n", saturn.price);
  printf("Speed: \t%d\n", saturn.speed);
}
