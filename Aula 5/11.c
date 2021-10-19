#include <stdio.h>

int somar(int n, int soma) {
  if(n > 0) {
    soma = soma + n + somar(n - 1, soma);
  }
  return soma;
}  

int main() {
  int n, soma = 0;
  scanf("%d", &n);
  if(n < 0)
    n = n * (-1);
  soma = somar(n, soma);
  printf("%d", soma);

  return 0;
}