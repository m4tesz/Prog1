#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MERET 10

void statisztika(int tomb[], int meret, int *min, int *max, double *atlag)
{
    int osszeg = 0;

    *min = tomb[0];
    *max = tomb[0];

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < *min)
        {
            *min = tomb[i];
        }

        if (tomb[i] > *max)
        {
            *max = tomb[i];
        }

        osszeg += tomb[i];
    }

    *atlag = (double)osszeg / meret;
}

int main()
{
    int tomb[MERET];

    int minimum, maximum;
    double atlag;

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

    statisztika(tomb, MERET, &minimum, &maximum, &atlag);

    printf("Legkisebb elem: %d\n", minimum);
    printf("Legnagyobb elem: %d\n", maximum);
    printf("Az elemek atlaga: %.1f\n", atlag);

    return 0;
}