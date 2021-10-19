#include <stdio.h>

int main() {
    int i;
    int a[5], b[5], c[5];
    for(i = 0; i < 10; i++) {
        if(i < 5)
            scanf("%d", &a[i]);
        else
            scanf("%d", &b[i - 5]);
    }
    for(i = 0; i < 5; i++) {
        c[i] = a[i] - b[i];
        printf("%d ", c[i]);
    }
    return 0;
}