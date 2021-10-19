#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, k, n, troca, add, posicao, *v = NULL;
  scanf("%d", &add);
  scanf("%d", &n);
  v = malloc(sizeof(int) * (n + 1));
  for(i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for(i = 0; add > v[i] && i < n - 1; i++);
  posicao = i;
  for(j = n; j > i; j--) {
    v[j] = v[j - 1];
    for(k = 0; k < n; k++)
      printf("%d ", v[k]);
    printf("\n");
  }
  v[posicao] = add;
  for(i = 0; i < n + 1; i++)
    printf("%d ", v[i]);

  return 0;
}