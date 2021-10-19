#include <stdio.h>
#include <stdlib.h>

int *funcao(){
  int n;
  int *p;
  scanf("%d", &n);
  if(n <= 0) {
    return NULL;
  }
  else {
    p = malloc(sizeof(int) * n);
    return p;
  }
}

int main(){
  int *p;
  p = funcao();
  if(p == NULL)
    printf("Ponteiro NULL.");
  else
    printf("Ponteiro NAO NULL.");

  return 0;
}