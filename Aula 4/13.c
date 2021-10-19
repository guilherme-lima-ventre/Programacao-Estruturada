#include <stdio.h>

void limpar(char v[]) {
    int i;
    for(i = 0; i < 8; i++)
        v[i] = '\0';
}

int checar(char v[]) {
    int i, n = 0;
    for(i = 0; i < 8; i++) {
        if(v[i] != '\0')
            n++;
    }
    return n;
}

int main() {
    int i, n;
    char v[8];
    limpar(v);
    scanf("%s", v);
    n = checar(v);
    while(n > 5) {
        printf("Digite novamente a string com ate 5 caracteres\n");
        limpar(v);
        scanf("%s", v);
        n = checar(v);
    }
    for(i = n - 1; i >= 0; i--) {
        printf("%c ", v[i]);
    }

    return 0;
}