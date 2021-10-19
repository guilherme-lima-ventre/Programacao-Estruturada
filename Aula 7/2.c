#include <stdio.h>

int main() {
  int x = 2, y = 5;
  if(&x > &y)
    printf("A");
  else
    printf("B");

  return 0;
}