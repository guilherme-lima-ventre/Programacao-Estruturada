#include <stdio.h>

int main() {
    int i, j, pri = 0, sec = 0;
    int m[3][3];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            if(i == j)
                pri = pri + m[i][j];
            if(i + j == 2)
                sec = sec + m[i][j];
        }
    }
    printf("Soma diagonal principal: %d\nSoma diagonal secundaria: %d", pri, sec);

    return 0;
}