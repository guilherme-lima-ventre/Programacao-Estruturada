#include <stdio.h>

int main() {
    int n, aux;
    scanf("%d", &n);
    aux = 0;
    while(aux <= n) {
        if((aux % 2) == 1)
            printf("%d ", aux);
        aux++;
    }
    printf("\n");
    aux = 0;
    while(aux <= n) {
        if((aux % 2) == 0)
            printf("%d ", aux);
        aux++;
    }
    
    return 0;
}