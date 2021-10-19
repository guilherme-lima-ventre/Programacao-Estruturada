#include <stdio.h>
#include <stdlib.h>

typedef struct lista lista;
struct lista {
  int v;
  lista *next;
};

lista *removerLista(lista *lista1, int remover) {
  if(remover >= 5)
    return NULL;
  int i;
  lista *inicio = lista1, *tirar = lista1;
  for(i = 0; i < 5; i++) {
    if(i >= 4 - remover)
      break;
    tirar = tirar->next;
  }
  tirar->next = NULL;
  
  return inicio;
}

lista *insereLista(lista *lista1, int num) {
  if(lista1 == NULL) {
    lista *novo = malloc(sizeof(lista));
    novo->next = NULL;
    novo->v = num;
    return novo;
  }
  else {
    lista1->next = insereLista(lista1->next, num);
    return lista1;
  }
}

int main() {
  int i, num, remover;
  lista *lista1 = malloc(sizeof(lista));
  lista1 = NULL;
  scanf("%d", &num);
  lista1 = insereLista(lista1, num);
  scanf("%d", &num);
  lista1 = insereLista(lista1, num);
  scanf("%d", &num);
  lista1 = insereLista(lista1, num);
  scanf("%d", &num);
  lista1 = insereLista(lista1, num);
  scanf("%d", &num);
  lista1 = insereLista(lista1, num);
  scanf("%d", &remover);
  lista1 = removerLista(lista1, remover);
  while(lista1) {
    printf("%d ", lista1->v);
    lista1 = lista1->next;
  }

  return 0;
}