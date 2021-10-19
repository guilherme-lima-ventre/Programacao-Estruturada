#include <stdio.h>
#include <math.h>

typedef struct atleta atleta;
  struct atleta {
    char nome[15];
    int idade;
    float altura;
  };

int main() {
  int i, j;
  struct atleta a[4], aux;
  
  for(i = 0; i < 4; i++) {
    scanf("%s", &a[i].nome[0]);
    scanf("%d", &a[i].idade);
    scanf("%f", &a[i].altura);
  }
  for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
      if(i != j && a[i].idade > a[j].idade) {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }
    }
  }
  for(i = 0; i < 4; i++) {
    printf("%d ", a[i].idade);
  }

  return 0;
}