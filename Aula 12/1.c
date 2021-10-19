#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int qtd;
  int *v;
} lista;

lista *criaLista(lista *listax, int qtd) {
  int i;
  listax = malloc(sizeof(lista));
  listax->v = malloc(sizeof(int)*qtd);
  listax->qtd = qtd;
  for(i = 0; i < qtd; i++)
    scanf("%d", &(listax->v[i]));
  return listax;
}

lista *juntaLista(lista *juntar, lista *lista1, lista *lista2) {
  int i, j, tam3;
  tam3 = lista1->qtd + lista2->qtd;
  juntar = malloc(sizeof(lista));
  juntar->qtd = tam3;
  juntar->v = malloc(sizeof(int)*tam3);
  for(i = 0; i < lista1->qtd; i++)
    juntar->v[i] = lista1->v[i];
  for(j = 0; j < lista2->qtd; j++, i++)
    juntar->v[i] = lista2->v[j];
  return juntar;
}

int main() {
  int i, tam1, tam2;
  lista *lista1, *lista2, *lista3;
  scanf("%d", &tam1);
  lista1 = criaLista(lista1, tam1);
  scanf("%d", &tam2);
  lista2 = criaLista(lista2, tam2);
  lista3 = juntaLista(lista3, lista1, lista2);
  for(i = 0; i < tam1 + tam2; i++)
    printf("%d ", lista3->v[i]);
  return 0;
}