#include <stdio.h>

int main() {
    int i, j;
    int m[3][3], v[3];
    for(i = 0; i < 3; i++)
        v[i] = 0;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            v[j] = v[j] + m[i][j];
        }
    }
    for(i = 0; i < 3; i++)
        printf("%d ", v[i]);
    
    return 0;
}