#include <stdio.h>

int main() {
    float a = 780;
    printf("Primeiro ganhador: R$ %.2f\n", (a*0.46));
    printf("Segundo ganhador: R$ %.2f\n", (a*0.32));
    printf("Terceiro ganhador: R$ %.2f", (a*0.22));

    return 0;
}