#include <stdio.h>

int negy(int ketto)
{
    return ketto * ketto;
}

int main()
{
    char ketto = 'A' / 'A' + 'A' / 'A';
    char nulla = ketto - ketto;
    char hat = ketto * ketto * ketto - ketto;


    printf("%d%d%d%d\n", ketto, nulla, ketto + negy(ketto), hat);

    return 0;
}