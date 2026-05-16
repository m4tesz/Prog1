#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[])
{
    int index = rand() % n;
    return tomb[index];
}

int main()
{
    int tomb[] = {10, 20, 30, 40, 50};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    srand(time(NULL));

    int elem = choice(meret, tomb);

    printf("A kivalasztott elem: %d\n", elem);

    return 0;
}