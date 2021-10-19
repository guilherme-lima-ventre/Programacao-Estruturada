#include <stdio.h>

int main() {
    float bA, hA, bB, hB, aA, aB;
    scanf(" %f %f %f %f", &bA, &hA, &bB, &hB);
    if(bA == hA || bB == hB) {
        printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
        return 0;
        }
    aA = bA*hA;
    aB = bB*hB;
    if(aA == aB)
        printf("A area do retangulo A eh: %f\nA area do retangulo B eh: %f\nA area do retangulo A eh igual ao do retangulo B!", aA, aB);
    else if(aA > aB)
        printf("A area do retangulo A eh: %f\nA area do retangulo B eh: %f\nA area do retangulo A eh maior do que a do retangulo B!", aA, aB);
    else
        printf("A area do retangulo A eh: %f\nA area do retangulo B eh: %f\nA area do retangulo B eh maior do que a do retangulo A!", aA, aB);
    
    return 0;
}