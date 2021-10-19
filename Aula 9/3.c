#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, n;
  scanf("%d", &n);
  while(n < 0) {
    printf("Numero deve ser POSITIVO! Digite um numero VALIDO!!\n");
    scanf("%d", &n);
  }
  int *v = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
    while(v[i] < 2) {
      printf("Digite um numero >=2!\n");
      scanf("%d", &v[i]);
    }
  }
  for(i = 0; i < n; i++)
    printf("%d ", v[i]);
  free(v);

  return 0;
}