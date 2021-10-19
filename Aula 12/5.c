#include <stdio.h>
#include <stdlib.h>

typedef struct lista lista;
struct lista {
  int qtd;
  int v[5];
};

void removerLista(lista *lista1, int remover) {
  int i;
  for(i = 4; remover > 0; remover--, i--) {
    lista1->v[i] = '\0';
    (lista1->qtd)--;
  }
}

int main() {
  int i, remover;
  lista *lista1 = malloc(sizeof(lista));
  lista1->qtd = 5;
  for(i = 0; i < lista1->qtd; i++)
    scanf("%d", &(lista1->v[i]));
  scanf("%d", &remover);
  removerLista(lista1, remover);
  for(i = 0; i < lista1->qtd; i++)
    printf("%d ", lista1->v[i]);

  return 0;
}