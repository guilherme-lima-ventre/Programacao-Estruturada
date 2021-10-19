#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int inicio, int meio, int fim) {
  int p1, p2, tam, i, j, k, fim1 = 0, fim2 = 0;
  tam = fim - inicio + 1;
  p1 = inicio;
  p2 = meio + 1;
  int *temp = malloc(sizeof(int)*tam);
  if(temp != NULL) {
    for(i = 0; i < tam; i++) {
      if(fim1 == 0 && fim2 == 0) {
        if(v[p1] < v[p2])
          temp[i] = v[p1++];
        else
          temp[i] = v[p2++];
        if(p1 > meio)
          fim1 = 1;
        if(p2 > fim)
          fim2 = 1;
      }
      else {
        if(fim1 == 0)
          temp[i] = v[p1++];
        else
          temp[i] = v[p2++];
      }
    }
    k = inicio;
    for(j = 0; j < tam; j++) {
      v[k] = temp[j];
      k++;
    }
  }
  free(temp);
}

void mergesort(int *v, int inicio, int fim) {
  if(inicio < fim) {
    int meio = (inicio + fim)/2;
    mergesort(v, inicio, meio);
    mergesort(v, meio + 1, fim);
    merge(v, inicio, meio, fim);
  }
}

int main() {
  int n, i;
  scanf("%d", &n);
  int *v = malloc(sizeof(int)*n);
  for(i = 0; i < n; i++)
    scanf("%d", &v[i]);
  mergesort(v, 0, n - 1);
  for(i = 0; i < n; i++)
    printf("%d ", v[i]);

  return 0;
}