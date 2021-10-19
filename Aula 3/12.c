#include <stdio.h>

float calcular(float a, float b, char c);

int main() {
    float a, b, valor;
    char c;
    scanf("%f %f", &a, &b);
    scanf(" %c", &c);
    valor = calcular(a, b, c);
    printf("%f", valor);

    return 0;
}

float calcular(float a, float b, char c) {
    if(c == '+')
        return (a + b);
    if(c == '-')
        return (a - b);
    if(c == '/')
        return (a / b);
    if(c == '*')
        return (a * b);
    return 0;
}