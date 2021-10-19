#include <stdio.h>

int somar(int n, int soma) {
    if (n != 0) {
        if(n > 0)
            soma = somar(n - 1, soma);
        if(n < 0)
            soma = somar(n + 1, soma);
    }
    return (soma +(n*n*n));
}


int main() {
    int n, soma = 0;
    scanf("%d", &n);
    soma = somar(n, soma);
    printf("%d", soma);

    return 0;
}