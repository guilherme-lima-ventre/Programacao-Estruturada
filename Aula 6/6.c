#include <stdio.h>

enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main() {
  enum semana i;
  scanf("%d", &i);
  if(i == Domingo)
    printf("Domingo");
  else if(i == Segunda)
    printf("Segunda");
  else if(i == Terca)
    printf("Terca");
  else if(i == Quarta)
    printf("Quarta");
  else if(i == Quinta)
    printf("Quinta");
  else if(i == Sexta)
    printf("Sexta");
  else
    printf("Sabado");

  return 0;
}