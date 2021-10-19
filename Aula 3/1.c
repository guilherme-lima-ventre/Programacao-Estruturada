#include <stdio.h>

int main() {
    int n, aux;
    scanf("%d", &n);
    aux = 0;
    while(aux <= n) {
        printf("%d ", aux);
        aux++;
    }
    printf("\n");
    aux = n;
    while(aux >= 0) {
        printf("%d ", aux);
        aux--;
    }
    return 0;
}