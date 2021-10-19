#include <stdio.h>

int main() {
    int menu;
    double a, b, res;
    scanf("%d %lf %lf", &menu, &a, &b);
    switch(menu) {
        case 1 :
            printf("O resultado da soma eh: %lf", (a + b));
            break;
        
        case 2 :
            printf("O resultado da subtracao eh: %lf", (a - b));
            break;

        case 3 :
            res = a/b;
            printf("O resultado da divisao eh: %lf", res);
            break;
        
        case 4 :
            printf("O resultado da multiplicacao eh: %lf", (a*b));
            break;
        
        default :
            printf("Numero Invalido!");
    }

    return 0;
}