#include <stdio.h>

int main() {

    int n;

    printf("n: ");
    scanf("%d", &n);

    printf("A megadott n számtól kisebb néggyel osztható számok:\n");

    for(int i = 1; i <= n; i++) {
        if(i % 4 == 0) {
            printf(" %d\n", i);
        }
    }

   return 0; 
}