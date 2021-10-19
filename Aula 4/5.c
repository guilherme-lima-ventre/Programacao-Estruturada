#include <stdio.h>

void imprimirpar(int v[]) {
    printf("Numeros pares:\n");
    int i, j, rep;
    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0) {
            for(j = 0, rep = 0; j < i; j++) {
                if(i != j && v[i] == v[j])
                    rep++;
            }
            if(rep == 0)
                printf("%d\n", v[i]);
        }
    }
}

void imprimirimpar(int v[]) {
    printf("Numeros impares:\n");
    int i, j, rep;
    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 1) {
            for(j = 0, rep = 0; j < i; j++) {
                if(i != j && v[i] == v[j])
                    rep++;
            }
            if(rep == 0)
                printf("%d\n", v[i]);
        }
    }
}

int main() {
    int i, menor, maior, entrada = 0;
    int v[10];
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(entrada == 0) {
            maior = v[i];
            menor = v[i];
            entrada++;
        }
        if(v[i] > maior)
            maior = v[i];
        if(v[i] < menor)
            menor = v[i];
    }
    imprimirpar(v);
    imprimirimpar(v);
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}