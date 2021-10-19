#include <stdio.h>

int main() {
    int soma, i;
    int v[6];
    for(i = 0; i < 6; i++)
        scanf("%d", &v[i]);
    soma = v[0] + v[1] + v[5];
    v[4] = 100;
    printf("A soma eh: %d.\n", soma);
    for(i = 0; i < 6; i++)
        printf("%d\n", v[i]);
    return 0;
}