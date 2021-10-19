#include <stdio.h>

int main() {
    int n, aux;
    scanf("%d", &n);
    while(n < 0) {
        printf("O numero deve ser >=0!\n");
        scanf("%d", &n);
    }
    while(n >= 0) {
        printf("%d ", n);
        n--;
    }
    printf("\nFIM!");
    return 0;   
}