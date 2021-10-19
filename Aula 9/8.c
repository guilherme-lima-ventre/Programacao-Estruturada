#include <stdio.h>
#include <stdlib.h>

int *funcao(int tam, int n){
  int i, *v;
  if(tam > 0) {
    v = malloc(sizeof(int) * tam);
    for(i = 0; i < tam; i++)
      v[i] = n;
    return v;
  }
  
  return NULL;
}

int main(){
  int i, tam, n, *p = NULL;
  scanf("%d", &tam);
  scanf("%d", &n);
  p = funcao(tam, n);
  if(n <= 0)
    printf("NULL");
  else {
    for(i = 0; i < tam; i++)
      printf("%d ", p[i]);
  }

  return 0;
}