#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, menor, troca, n, *v = NULL;
  scanf("%d", &n);
  v = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for(i = 0; i < n - 1; i++) {
    menor = i;
    for(j = i + 1; j < n; j++) {
      if(v[j] < v[menor])
        menor = j;
    }
    if(i != menor) {
      troca = v[i];
      v[i] = v[menor];
      v[menor] = troca;
    }
  }
  for(i = 0; i < n; i++)
    printf("%d ", v[i]);

  return 0;
}