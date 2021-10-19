#include <stdio.h>

int main() {
    int i, soma = 0;
    float media;
    int v[5];
    for(i = 0; i < 5; i++)
        scanf("%d", &v[i]);
    for(i = 0; i < 5; i++) {
        printf("%d ", v[i]);
        soma = soma + v[i];
    }
    media = (float) soma / 5;
    printf("\n%.2f", media);
    return 0;
}