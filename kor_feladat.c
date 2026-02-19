#include <stdio.h>

int main() {

    const double pi = 3.141592653589793;
    double r;

    printf("Adja meg a kör sugarát:\n");
    scanf("%lf", &r);

    double terulet = r * r * pi;
    double kerulet = 2 * r * pi;

    printf("A kör területe: %.2lf\n", terulet);
    printf("A kör kerület: %.2lf\n", kerulet);

    return 0;
}
