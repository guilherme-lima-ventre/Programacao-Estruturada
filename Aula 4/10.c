#include <stdio.h>

int main() {
    int i, j;
    float aux, v[10];
    for(i = 0; i < 10; i++)
        scanf("%f", &v[i]);
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(i != j && v[j] > v[i]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for(i = 0; i < 10; i++)
        printf("%.1f\n", v[i]);
    
    return 0;
}