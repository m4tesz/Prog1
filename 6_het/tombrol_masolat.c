#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d", &n);

    int numbers[n];
    int copy[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d. szám: ", i + 1);
        scanf("%d", &numbers[i]);
        copy[i] = abs(numbers[i]);
    }

    printf("A bevitt számok abszolútértékei: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", copy[i]);
        if (i != n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    printf("A megadott számok: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);
        if (i != n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
