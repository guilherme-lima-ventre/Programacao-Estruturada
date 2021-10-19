#include <stdio.h>

int main() {
  int c, i, f, d;
  c = sizeof(char);
  i = sizeof(int);
  f = sizeof(float);
  d = sizeof(double);
  printf("Char: %d\nInt: %d\nFloat: %d\nDouble: %d", c, i, f, d);

  return 0;
}