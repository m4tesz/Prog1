#include <stdio.h>
#include <stdlib.h>

#define MIN 1
#define MAX 99

int main(void)
{
    int numbers[MAX] = {0};
    int num;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");

    while (1)
    {
        printf("Szám: ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        if (num < MIN || num > MAX)
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            continue;
        }

        numbers[num] = 1;
    }

    int count = 0;
    for (int i = MIN; i <= MAX; i++)
    {
        if (numbers[i])
        {
            count++;
        }
    }

    printf("\n%d db különböző szám lett megadva.\n", count);

    printf("Ezek (növekvő sorrendben): ");
    int first = 1;
    for (int i = MIN; i <= MAX; i++)
    {
        if (numbers[i])
        {
            if (!first)
            {
                printf(", ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
