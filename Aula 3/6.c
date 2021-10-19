#include <stdio.h>

int main() {
    int n, i;
    float div, h = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        div = (float) 1/i;
        h = h + div;
    }
    printf("%.1f", h);

    return 0;
}