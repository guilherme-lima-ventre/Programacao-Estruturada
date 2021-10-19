#include <stdio.h>

int somar(int v[], int i, int soma) {
  if(i < 4)
    soma = v[i] + somar(v, i + 1, soma);
  return soma;
}  

int main() {
  int i, soma = 0, v[4];
  for(i = 0; i < 4; i++)
    scanf("%d", &v[i]);
  i = 0;
  soma = somar(v, i, soma);
  printf("%d", soma);

  return 0;
}