#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MERET 10

typedef struct
{
    int minimum;
    int maximum;
    double atlag;
} Statisztika;

Statisztika statisztika(int tomb[], int meret)
{
    Statisztika adat;
    int osszeg = 0;

    adat.minimum = tomb[0];
    adat.maximum = tomb[0];

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < adat.minimum)
        {
            adat.minimum = tomb[i];
        }

        if (tomb[i] > adat.maximum)
        {
            adat.maximum = tomb[i];
        }

        osszeg += tomb[i];
    }

    adat.atlag = (double)osszeg / meret;

    return adat;
}

int main()
{
    int tomb[MERET];

    srand(time(NULL));

    for (int i = 0; i < MERET; i++)
    {
        tomb[i] = rand() % 90 + 10;
    }

    printf("A tomb elemei: ");

    for (int i = 0; i < MERET; i++)
    {
        printf("%d", tomb[i]);

        if (i < MERET - 1)
        {
            printf(", ");
        }
    }

    printf("\n");

    Statisztika eredmeny = statisztika(tomb, MERET);

    printf("Legkisebb elem: %d\n", eredmeny.minimum);
    printf("Legnagyobb elem: %d\n", eredmeny.maximum);
    printf("Az elemek atlaga: %.1f\n", eredmeny.atlag);

    return 0;
}