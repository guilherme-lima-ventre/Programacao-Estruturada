#include <stdio.h>

int main() {
    int n, i, soma = 0;
    scanf("%d", &n);
    for(i = n; i > 0; i--) {
        if((n % i) == 0 && i != n) {
            soma = soma + i;
        }
    }
    printf("%d", soma);

    return 0;
}