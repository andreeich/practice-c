#include <stdio.h>

#define X(...) #__VA_ARGS__

int main(void) { printf("%s\n", X(1, 2, something)); }
