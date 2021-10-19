#include <stdio.h>

int main() {
    int i, j, soma = 0;
    int m[3][3];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if((i == 0 && j >= 1) || (i == 1 && j == 2))
                soma = soma + m[i][j];
        }
    }
    printf("Soma: %d", soma);

    return 0;
}