#include <stdio.h>
#include <stdlib.h>

char* funcao(char *v){
  int i;
  char aux;
  for(i = 0; i < 3; i++) {
    aux = v[i];
    v[i] = v[5 - i];
    v[5 - i] = aux;
  }
  return v;
}

int main(){
  int i;
  char *v = malloc(sizeof(char)*6);
  scanf("%s", v);
  v = funcao(v);
  for(i = 0; i < 6; i++)
    printf("%c ", v[i]);

  return 0;
}