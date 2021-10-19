#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, add, atual, n, *v = NULL;
  scanf("%d", &n);
  v = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
    atual = v[i];
    j = i;
    while(j > 0 && atual < v[j - 1]) {
      v[j] = v[j - 1];
      j--;
    }
    v[j] = atual;
    for(j = 0; j <= i; j++)
      printf("%d ", v[j]);
    printf("\n");
  }

  return 0;
}