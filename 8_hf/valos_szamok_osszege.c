#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("valos_szamok.txt", "r");

    if (fp == NULL)
    {
        printf("Nem sikerult megnyitni a fajlt!\n");
        return 1;
    }

    double szam;
    double osszeg = 0.0;

    while (fscanf(fp, "%lf", &szam) == 1)
    {
        osszeg += szam;
    }

    printf("Az osszeg: %.20lf\n", osszeg);

    fclose(fp);

    return 0;
}