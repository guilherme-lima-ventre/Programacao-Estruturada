#include <stdio.h>
#include <math.h>

typedef struct atleta atleta;
  struct atleta {
    char nome[15];
    int idade;
    float altura;
  };

int main() {
  int i, velho = 0, maior = 0;
  struct atleta a[4];
  
  for(i = 0; i < 4; i++) {
    scanf(" %s", &a[i].nome);
    scanf("%d", &a[i].idade);
    scanf("%f", &a[i].altura);
    if(a[i].idade > a[velho].idade)
      velho = i;
    if(a[i].altura > a[maior].altura)
      maior = i;
  }
  printf("Mais alto: %s\nMais velho: %s", a[maior].nome, a[velho].nome);

  return 0;
}