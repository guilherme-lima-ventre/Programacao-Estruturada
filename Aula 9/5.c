#include <stdio.h>
#include <stdlib.h>

int* funcao(int n){
  int i, *p = malloc(sizeof(int) * n);
  for(i = 0; i < n; i++)
    scanf("%d", &p[i]);
  return p;
}

int main(){
  int i, n;
  scanf("%d", &n);
  int *retP = NULL;
  retP = funcao(n);
  for(i = 0; i < n; i++)
    printf("%d ", retP[i]);

  return 0;
}