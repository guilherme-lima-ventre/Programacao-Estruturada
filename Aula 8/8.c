#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, m[3][3];
  int *p = &m;
  for(i = 0; i < 9; i++) {
    scanf("%d", p + i);
    (*(p + i))++;
  }
  for(i = 0; i < 9; i++)
    printf("%d\n", *(p + i));

  return 0;
}