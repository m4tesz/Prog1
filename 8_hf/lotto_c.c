#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int db;
    int also, felso;

    printf("Hany db random szamot kersz?\n");
    scanf("%d", &db);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    if (db > (felso - also + 1))
    {
        printf("Hiba: nincs eleg kulonbozo szam az intervallumban!\n");
        return 1;
    }

    int szamok[db];

    srand(time(NULL));

    for (int i = 0; i < db; i++)
    {
        int ujSzam;
        int letezik;

        do
        {
            ujSzam = rand() % (felso - also + 1) + also;

            letezik = 0;

            for (int j = 0; j < i; j++)
            {
                if (szamok[j] == ujSzam)
                {
                    letezik = 1;
                    break;
                }
            }

        } while (letezik);

        szamok[i] = ujSzam;
    }

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

    printf("\nA generalt szamok: ");

    for (int i = 0; i < db; i++)
    {
        printf("%d ", szamok[i]);
    }

    printf("\n");

    return 0;
}