#include <stdio.h>

void funcao(int *A, int *B){
  int aux;
  if(*A >= *B)
    return;
  else {
    aux = *B;
    *B = *A;
    *A = aux;
  } 
}

int main(){
  int A, B;
  scanf("%d", &A);
  scanf("%d", &B);     
  funcao(&A, &B);
  printf("%d\n", A);
  printf("%d", B);
}