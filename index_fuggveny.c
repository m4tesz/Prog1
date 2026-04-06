#include <stdio.h>

int index_of(int arr[], int size, int value);

int main()
{
    int arr[] = {5, 3, 7, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int value;

    printf("Milyen erteket keresel? ");
    scanf("%d", &value);

    int index = index_of(arr, size, value);

    if (index != -1)
    {
        printf("Az ertek indexe: %d\n", index);
    }
    else
    {
        printf("Az ertek NINCS a tombben.\n");
    }

    return 0;
}

int index_of(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}