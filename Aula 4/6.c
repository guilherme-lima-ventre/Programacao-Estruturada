#include <stdio.h>

int main() {
    int i, negativos = 0;
    float soma = 0;
    float v[5];
    for(i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
        if(v[i] >= 0)
            soma = soma + v[i];
        else if(v[i] < 0)
            negativos++;
    }
    printf("%d\n%f", negativos, soma);

    return 0;
}