#include <stdio.h>

int main() {
    int i, j, neg = 0, maiores = 0;
    int m[4][4];
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
            if(m[i][j] > 10)
                maiores++;
            if(m[i][j] < 0)
                neg++;
        }
    }
    printf("Qtd. > 10: %d\nQtd. < 0: %d", maiores, neg);

    return 0;
}