#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  char a;
  char *v = malloc(sizeof(int)*5);

  for(i = 0; i < 5; i++)
    scanf(" %c", v + i);
  scanf(" %c", &a);
  for(i = 0; i < 5; i++) {
    *(v + i) = a;
    printf("%c", *(v + i));
  }
  return 0;
}