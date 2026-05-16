#include <stdio.h>

int main() {
    int n = 600;
    int first = 1;

    for (int i = 1; i * i <= n; i++) {
        printf("%d", i * i);
    }
    printf("\n");

    for (int i = 1; i * i <= n; i++) {
        if (!first) {
            printf(", ");
        }
        printf("%d", i * i);
        first = 0;
    }

    printf("\n");

    return 0;
}