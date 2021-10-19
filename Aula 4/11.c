#include <stdio.h>

int checar(char v[]) {
    int i, cont = 0;
    for(i = 0; i < 8; i++) {
        if(v[i] != '\0')
            cont++;
    }
    if(cont != 8)
        return cont;
    return 8;
}

int main() {
    int i, n;
    char v[8];
    for(i = 0; i < 8; i++)
        v[i] = '\0';
    scanf("%s", v);
    n = checar(v);
    while(n != 8) {
        printf("Voce digitou uma string com %d caractere(s)!\n", n);
        for(i = 0; i < 8; i++)
            v[i] = '\0';
        printf("A string deve ter 8 caracteres. Por favor, digite uma nova string:\n");
        scanf("%s", v);
        n = checar(v);
    }
    for(i = 0; i < 4; i++)
        printf("%c", v[i]);

    return 0;
}