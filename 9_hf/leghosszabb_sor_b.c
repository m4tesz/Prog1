#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Hasznalat: %s fajlnev\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("Nem sikerult megnyitni a fajlt!\n");
        return 1;
    }

    int c;

    int aktualis_hossz = 0;
    int max_hossz = 0;

    int aktualis_sor = 1;
    int max_sor = 1;

    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
        {
            if (aktualis_hossz > max_hossz)
            {
                max_hossz = aktualis_hossz;
                max_sor = aktualis_sor;
            }

            aktualis_hossz = 0;
            aktualis_sor++;
        }
        else
        {
            aktualis_hossz++;
        }
    }

    if (aktualis_hossz > max_hossz)
    {
        max_hossz = aktualis_hossz;
        max_sor = aktualis_sor;
    }

    printf("%d %d\n", max_sor, max_hossz);

    fclose(fp);

    return 0;
}