#include <stdio.h>

void make_positive(int arr[], int size);

int main()
{
    int arr[] = {4, -7, 2, -3, 5, -1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    make_positive(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}

void make_positive(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            arr[i] = -arr[i];
    }
}