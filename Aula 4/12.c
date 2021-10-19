#include <stdio.h>

int main() {
    int i, n = 0;
    char v[8];
    for(i = 0; i < 8; i++)
        v[i] = '\0';
    scanf("%s", v);
    for(i = 0; i < 8; i++) {
        if(v[i] == '\0') {
            n = i;
            break;
        }
        printf("%c\n", v[i]);
    }
    if(n == 0)
        printf("%d", i);
    else
        printf("%d", n);

    return 0;
}