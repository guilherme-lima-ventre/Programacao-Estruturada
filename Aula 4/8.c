#include <stdio.h>

int iguais(int v[]) {
    int i, j, k, tirar = 123456;
    for(i = 0; i < 6; i++) {
        if(v[i] == 123456);
        else {
            for(j = 0; j < 6; j++) {
                if(i != j && v[i] == v[j]) {
                    printf("%d\n", v[i]);
                    tirar = v[i];
                    for(k = 0; k < 6; k++) {
                        if(v[i] == tirar);
                            v[i] = 123456;
                    }
                }
            }
        }
    }
    if(tirar == 123456)
        return 0;
    return 1;
}

int main() {
    int i, j, cont = 0, checar = 0;
    int v[6];
    for(i = 0; i < 6; i++)
        scanf("%d", &v[i]);
    checar = iguais(v);
    if(checar == 0) {
        printf("Nao existem valores iguais!");
    }
    return 0;
}