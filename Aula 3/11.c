#include <stdio.h>
#include <math.h>

void checar(int n) {
    int quadrado, teste;
    quadrado = sqrt(n);
    teste = quadrado*quadrado;
    if(teste == n)
        printf("Eh um quadrado perfeito!");
    else
        printf("Nao eh um quadrado perfeito!");
}

int main() {
    int n;
    scanf("%d", &n);
    checar(n);

    return 0;
}