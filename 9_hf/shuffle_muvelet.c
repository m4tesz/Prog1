#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void csere(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shuffle(int n, int tomb[])
{
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        csere(&tomb[i], &tomb[j]);
    }
}

int main()
{
    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    srand(time(NULL));

    printf("Eredeti tomb:\n");

    for (int i = 0; i < meret; i++)
    {
        printf("%d ", tomb[i]);
    }

    printf("\n");

    shuffle(meret, tomb);

    printf("Kikevert tomb:\n");

    for (int i = 0; i < meret; i++)
    {
        printf("%d ", tomb[i]);
    }

    printf("\n");

    return 0;
}