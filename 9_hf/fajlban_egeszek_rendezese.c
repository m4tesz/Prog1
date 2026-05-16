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

    int szamok[1000];
    int db = 0;

    while (fscanf(fp, "%d", &szamok[db]) == 1)
    {
        db++;
    }

    fclose(fp);

    for (int i = 0; i < db - 1; i++)
    {
        for (int j = 0; j < db - i - 1; j++)
        {
            if (szamok[j] > szamok[j + 1])
            {
                int temp = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < db; i++)
    {
        printf("%d\n", szamok[i]);
    }

    return 0;
}