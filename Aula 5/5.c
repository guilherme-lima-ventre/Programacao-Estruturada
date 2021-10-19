#include <stdio.h>

int main() {
    int i, j, l, c;
    scanf("%d %d", &l, &c);
    int m[l][c];
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            if(j > i) {
                m[i][j] = 2*i + 7*j - 2;
            }
            else if(i > j) {
                m[i][j] = 4*i*i*i + 5*j*j + 1;
            }
            else {
                m[i][j] = 3*i*i - 1;
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}