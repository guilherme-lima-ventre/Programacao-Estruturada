#include <stdio.h>

int main() {
    int op, menor, soma, entrada = 0;
    scanf("%d", &op);
    if(op == 0)
        printf("Nenhum calculo foi realizado!");
    else {    
        while(op != 0) {
            if(op == 1) {
                int a, b;
                scanf("%d %d", &a, &b);
                if(entrada++ == 0)
                    menor = a + b;
                soma = a + b;
                printf("(a+b) = %d\n", soma);
                if(soma < menor)
                    menor = soma;
            }
            else if(op == 2) {
                int c, d, e;
                scanf("%d %d %d", &c, &d, &e);
                if(entrada++ == 0)
                    menor = c + d + e;
                soma = c + d + e;
                printf("(a+b+c) = %d\n", soma);
                if(soma < menor)
                    menor = soma;
            }
            else {
                int f, g;
                scanf("%d %d", &f, &g);
                if(entrada++ == 0)
                    menor = f * g;
                soma = f * g;
                printf("(a*b) = %d\n", soma);
                if(soma < menor)
                    menor = soma;
            }
            scanf("%d", &op);
        }
        printf("Menor resultado: %d", menor);
    }
    return 0;
}