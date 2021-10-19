#include <stdio.h>

int main() {
    int i, j, soma = 0;
    int m[4][4];
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
            if(i > j) 
                soma = soma + m[i][j];
        }
    }
    printf("Soma: %d", soma);

    return 0;
}