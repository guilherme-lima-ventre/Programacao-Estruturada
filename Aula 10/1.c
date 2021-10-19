#include <stdio.h>
#include <stdlib.h>

int main() {
  int aux, i, j, n, *v = NULL;
  scanf("%d", &n);
  v = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for(i = 0; i < n; i++) {
    for(j = i + 1; j < n; j++) {
      if(v[i] > v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }
  for(i = 0; i < n; i++)
    printf("%d ", v[i]);

  return 0;
}