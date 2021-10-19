#include <stdio.h>

int main() {
    int i, cont = 0;
    char c, v[8];
    for(i = 0; i < 8; i++)
        v[i] = '\0';
    scanf(" %s ", v);
    scanf("%c", &c);
    for(i = 0; i < 8; i++) {
        if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') {
            v[i] = c;
            cont++;
        }
    }
    printf("A string possui %d vogais.\n%s", cont, v);

    return 0;
}