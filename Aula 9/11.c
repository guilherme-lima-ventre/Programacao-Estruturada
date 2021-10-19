#include <stdio.h>
#include <stdlib.h>

int *funcao(int *a, int *b, int n) {
  int i, *c = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++)
    c[i] = a[i] + b[i];
  
  return c;
}

int main() {
  int *a, *b, *c = NULL, n, i;
  scanf("%d", &n);
  a = malloc(sizeof(int) * n);
  b = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for(i = 0; i < n; i++)
    scanf("%d", &b[i]);
  c = funcao(a, b, n);
  for(i = 0; i < n; i++)
    printf("%d ", c[i]);

  return 0;
}