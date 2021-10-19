#include <stdio.h>

void funcao(int *A, int *B){
  *A = *A + *B;
}

int main(){
  int A, B;
  scanf("%d", &A);
  scanf("%d", &B);     
  funcao(&A, &B);
  printf("%d\n", A);
  printf("%d", B);
}