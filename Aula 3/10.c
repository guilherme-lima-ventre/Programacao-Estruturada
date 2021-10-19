#include <stdio.h>

void calcular(float f);

int main() {
    float f;
    scanf("%f", &f);
    calcular(f);

    return 0;
}

void calcular(float f) {
    float c;
    c = (f-32.0)*(5.0/9.0);
    printf("%.2f", c);
}