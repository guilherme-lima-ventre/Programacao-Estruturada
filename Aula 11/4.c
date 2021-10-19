#include <stdio.h>
#include <stdlib.h>

int particiona(int *v, int inicio, int fim) {
  int esq, dir, pivo, aux;
  esq = inicio;
  dir = fim;
  pivo = v[inicio];

  while(esq < dir) {
    while(v[esq] <= pivo)
      esq++;
    while(v[dir] > pivo)
      dir--;
    if(esq < dir) {
      aux = v[dir];
      v[dir] = v[esq];
      v[esq] = aux;
    }
  }
  v[inicio] = v[dir];
  v[dir] = pivo;
  return dir;
}

void quicksort(int *v, int inicio, int fim) {
  if(fim > inicio) {
    int pivo = particiona(v, inicio, fim);
    quicksort(v, inicio, pivo - 1);
    quicksort(v, pivo + 1, fim);
  }
}

int main() {
  int n, i;
  scanf("%d", &n);
  int *v = malloc(sizeof(int)*n);
  for(i = 0; i < n; i++)
    scanf("%d", &v[i]);
  quicksort(v, 0, n - 1);
  for(i = 0; i < n; i++)
    printf("%d ", v[i]);

  return 0;
}