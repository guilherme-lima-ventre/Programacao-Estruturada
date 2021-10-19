#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int *v = malloc(sizeof(int)*5);
  for(i = 0; i < 5; i++)
    scanf("%d", v + i);
  for(i = 0; i < 5; i++)
    printf("%d ", *(v + i));

  return 0;
}