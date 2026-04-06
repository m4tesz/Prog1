#include <stdio.h>

int main() {

    int a;
    printf("Adja meg a téglalap A oldalának hosszát:\n");
    scanf("%d", &a);

    int b;
    printf("Adja meg a téglalap B oldalának hosszát:\n");
    scanf("%d", &b);

    int kerulet = 2 * (a + b);
    printf("A téglalap kerülete: %d + %d * 2 = %d\n", a, b, kerulet);

    int terulet = a * b;
    printf("A téglalap területe: %d * %d = %d\n", a, b, terulet);

    return 0;

}
