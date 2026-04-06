#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, lower, upper;

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);

    printf("Alsó határ: ");
    scanf("%d", &lower);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &upper);

    srand((unsigned int)time(NULL));

    printf("\nA generált számok: ");
    for (int i = 0; i < n; i++)
    {
        int num = rand() % (upper - lower + 1) + lower;
        printf("%d", num);
        if (i != n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
