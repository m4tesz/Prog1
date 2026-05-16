#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Hasznalat: %s sorok_szama min_hossz max_hossz\n", argv[0]);
        return 1;
    }

    int sorok = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);

    srand(time(NULL));

    char karakterek[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789";

    int karakterek_szama = sizeof(karakterek) - 1;

    for (int i = 0; i < sorok; i++)
    {
        int hossz = rand() % (max - min + 1) + min;

        for (int j = 0; j < hossz; j++)
        {
            char c = karakterek[rand() % karakterek_szama];
            printf("%c", c);
        }

        printf("\n");
    }

    return 0;
}