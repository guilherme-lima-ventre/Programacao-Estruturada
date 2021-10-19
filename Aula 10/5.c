#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, atual, n, *v = NULL;
  scanf("%d", &n);
  v = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for(i = 0; i < n; i++) {
    atual = v[i];
    j = i;
    while(j > 0 && atual < v[j - 1]) {
      v[j] = v[j - 1];
      j--;
    }
    v[j] = atual;
  }
  for(i = 0; i < n; i++)
    printf("%d ", v[i]);

  return 0;
}