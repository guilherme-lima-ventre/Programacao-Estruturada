#include <stdio.h>

int checar(int v[], int n) {
    int i;
    for(i = 0; i < 10; i++) {
        if(v[i] == n) {
            return (0);
        }
    }
    return (1);
}

int main() {
    int i, n, teste;
    int v[10];
    for(i = 0; i < 10; i++)
        v[i] = 1111;
    scanf("%d", &n);
    for(i = 0; i < 10; i++) {
        teste = checar(v, n);
        while(teste == 0) {
            printf("Numero já digitado! Digite outro numero!\n");
            scanf("%d", &n);
            teste = checar(v, n);
        }
        v[i] = n;
        scanf("%d", &n);
    }
    for(i = 0; i < 10; i++)
        printf("%d\n", v[i]);

    return 0;
}