#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    switch(a) {
        case 1 :
            printf ("Domingo!");
            break;
    
        case 2 :
            printf ("Segunda-feira!");
            break;
    
        case 3 :
            printf ("Terça-feira!");
            break;
    
        case 4 :
            printf ("Quarta-feira!");
            break;
    
        case 5 :
            printf ("Quinta-feira!");
            break;
    
        case 6 :
            printf ("Sexta-feira!");
            break;
    
        case 7 :
            printf ("Sabado!");
            break;
        
        default :
            printf ("Numero invalido!\n");
    }

    return 0;
}