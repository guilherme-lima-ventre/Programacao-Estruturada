#include <stdio.h>

int main() {
    int n, i, j, valor = 1;
    scanf("%d", &n);
    for(i = n; i > 0; i--) {
        for(j = n - i + 1; j > 0; j--)
            printf("%d ", valor++);
        printf("\n");
    }

    return 0;
}