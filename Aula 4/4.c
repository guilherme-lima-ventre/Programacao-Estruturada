#include <stdio.h>

int main() {
    int i, soma, x, y;
    int v[8];
    for(i = 0; i < 8; i++)
        scanf("%d", &v[i]);
    scanf("%d", &x);
    while(x < 0 || x >= 8) {
        printf("Valor de X invalido!\n");
        scanf("%d", &x);
    }
    scanf("%d", &y);
    while(y < 0 || y >= 8) {
        printf("Valor de Y invalido!\n");
        scanf("%d", &y);
    }
    soma = v[x] + v[y];
    printf("Soma eh: %d", soma);

    return 0;
}