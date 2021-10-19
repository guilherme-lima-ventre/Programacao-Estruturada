#include <stdio.h>
#include <stdlib.h>

typedef struct lista lista;
  struct lista {
  int valor;
  lista *next;
};

lista *insereFinal(lista *listax, int num) {
  if(listax == NULL) {
    lista *novo = malloc(sizeof(lista));
    novo->next = NULL;
    novo->valor = num;
    return novo;
  }
  listax->next = insereFinal(listax->next, num);
  return listax;
}

void liberarLista(lista *listax) {
  if(listax != NULL)
    liberarLista(listax->next);
  free(listax);
}

int main() {
  int i, num, tam1, tam2;
  lista *lista1 = NULL, *lista2 = NULL, *lista3 = NULL;
  scanf("%d", &tam1);
  for(i = 0; i < tam1; i++) {
    scanf("%d", &num);
    lista1 = insereFinal(lista1, num);
  }
  scanf("%d", &tam2);
  for(i = 0; i < tam2; i++) {
    scanf("%d", &num);
    lista2 = insereFinal(lista2, num);
  }
  for(i = 0; i < tam1 + tam2; i++) {
    if(i < tam1) {
      lista3 = insereFinal(lista3, lista1->valor);
      lista1 = lista1->next;
    }
    else {
      lista3 = insereFinal(lista3, lista2->valor);
      lista2 = lista2->next;
    }
  }
  for(i = 0; i < tam1 + tam2; i++) {
    printf("%d ", lista3->valor);
    lista3 = lista3->next;
  }
  liberarLista(lista1);
  liberarLista(lista2);
  liberarLista(lista3);

  return 0;
}