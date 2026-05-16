#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000

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

    int *szamok = malloc(MAX * sizeof(int));

    if (szamok == NULL)
    {
        printf("Memoriafoglalasi hiba!\n");
        fclose(fp);
        return 1;
    }

    int db = 0;

    while (fscanf(fp, "%d", &szamok[db]) == 1)
    {
        db++;
    }

    fclose(fp);

    qsort(szamok, db, sizeof(int), compare);

    for (int i = 0; i < db; i++)
    {
        printf("%d\n", szamok[i]);
    }

    free(szamok);

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}