#include <stdio.h>

typedef struct infos infos;
  struct infos{
    char nome[15];
    int idade;
  };

int main() {

  struct infos a;
  scanf("%s", &a.nome);
  scanf("%d", &a.idade);
  printf("Nome: %s\nIdade: %d", a.nome, a.idade);

  return 0;
}