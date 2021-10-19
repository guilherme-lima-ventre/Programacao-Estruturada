#include <stdio.h>

int main() {
    int n, i;
    float div = 1, E = 0, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1, div = 1; j <= i; j++) {
            div = div*j;
        }
        E = E + 1/div;
    }
    printf("%f", E);

    return 0;
}