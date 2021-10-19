#include <stdio.h>
#include <math.h>

typedef struct aluno aluno;
  struct aluno {
    int ra;
    char nome[15];
    float nota1;
    float nota2;
    float nota3;
    float media;
  };

int main() {
  int i;
  struct aluno a[4];
  
  for(i = 0; i < 4; i++) {
    scanf("%d", &a[i].ra);
  scanf(" %s", &a[i].nome);
  scanf("%f", &a[i].nota1);
  scanf("%f", &a[i].nota2);
  scanf("%f", &a[i].nota3);
  a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3) / 3;
  }
  if(a[0].media > a[1].media && a[0].media > a[2].media && a[0].media > a[3].media)
    printf("%d\n%s\n%.1f\n%.1f\n%.1f", a[0].ra, a[0].nome, a[0].nota1, a[0].nota2, a[0].nota3);
  else if(a[1].media > a[0].media && a[1].media > a[2].media && a[1].media > a[3].media)
    printf("%d\n%s\n%.1f\n%.1f\n%.1f", a[1].ra, a[1].nome, a[1].nota1, a[1].nota2, a[1].nota3);
  else if(a[2].media > a[0].media && a[2].media > a[1].media && a[2].media > a[3].media)
    printf("%d\n%s\n%.1f\n%.1f\n%.1f", a[2].ra, a[2].nome, a[2].nota1, a[2].nota2, a[2].nota3);
  else
    printf("%d\n%s\n%.1f\n%.1f\n%.1f", a[3].ra, a[3].nome, a[3].nota1, a[3].nota2, a[3].nota3);

  return 0;
}