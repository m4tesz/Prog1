#include <stdio.h>

#define DB 6

int main() {
    const int CEL_OSSZEG = 90;
    const long long CEL_SZORZAT = 996300;

    for (int a = 1; a <= 40; a++) {
        if (CEL_SZORZAT % a != 0) continue;

        for (int b = a + 1; b <= 41; b++) {
            long long ab = (long long)a * b;

            if (CEL_SZORZAT % ab != 0) continue;

            for (int c = b + 1; c <= 42; c++) {
                long long abc = ab * c;

                if (CEL_SZORZAT % abc != 0) continue;

                for (int d = c + 1; d <= 43; d++) {
                    long long abcd = abc * d;

                    if (CEL_SZORZAT % abcd != 0) continue;

                    for (int e = d + 1; e <= 44; e++) {
                        long long abcde = abcd * e;

                        if (CEL_SZORZAT % abcde != 0) continue;

                        if (CEL_SZORZAT % abcde != 0)
                            continue;

                        int f = CEL_SZORZAT / abcde;

                        if (f <= e || f > 45)
                            continue;

                        if (a + b + c + d + e + f == CEL_OSSZEG) {
                            printf("A nyeroszamok:\n");
                            printf("%d %d %d %d %d %d\n",
                                   a, b, c, d, e, f);

                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("Nincs megoldas.\n");

    return 0;
}