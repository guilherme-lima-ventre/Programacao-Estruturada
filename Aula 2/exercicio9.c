#include <stdio.h>

int main() {
    int a, b;
    scanf(" %d %d", &a, &b);
    if(a == b) 
        printf("Numeros Iguais!");
    else if(a > b)
        printf("O %d eh o maior numero!", a);
    else
        printf("O %d eh o maior numero!", b);

    return 0;
}