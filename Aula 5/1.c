#include <stdio.h>

int main() {
    int i, j, maior, menor, lmaior, cmaior, lmenor, cmenor, entrada = 0;
    int m[3][3];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if(entrada == 0) {
                maior = m[i][j];
                lmaior = i;
                cmaior = j;
                menor = m[i][j];
                lmenor = i;
                cmenor = j;
                entrada++;
            }
            if(m[i][j] > maior) {
                maior = m[i][j];
                lmaior = i;
                cmaior = j;
            }
            if(m[i][j] < menor) {
                menor = m[i][j];
                lmenor = i;
                cmenor = j;
            }
        }
    }
    printf("Maior: %d\nPosicao (maior): %d linha e %d coluna\n", maior, lmaior, cmaior);
    printf("Menor: %d\nPosicao (menor): %d linha e %d coluna", menor, lmenor, cmenor);

    return 0;
}