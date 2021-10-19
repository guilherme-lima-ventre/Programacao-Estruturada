#include <stdio.h>

int main() {
    int a;
    scanf(" %d", &a);
    printf("Antecessor de %d eh: %d\nSucessor de %d eh: %d", a, (a-1), a, (a+1));

    return 0;
}