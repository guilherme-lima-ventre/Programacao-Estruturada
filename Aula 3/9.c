#include <stdio.h>

void imprimir(int n);

int main() {
    int n;
    scanf("%d", &n);
    imprimir(n);

    return 0;
}

void imprimir(int n) {
    int dia = n;
    while(dia < 1 || dia > 7) {
        printf("O numero deve ser >=1 e <=7!\n");
        scanf("%d", &dia);
    }
    if(dia == 1)
        printf("Domingo");
    else if(dia == 2)
        printf("Segunda-feira");
    else if(dia == 3)
        printf("Terça-feira");
    else if(dia == 4)
        printf("Quarta-feira");
    else if(dia == 5)
        printf("Quinta-feira");
    else if(dia == 6)
        printf("Sexta-feira");
    else
        printf("Sabado");
}