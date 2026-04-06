#include <stdio.h>

int is_sorted(int arr[], int size);

int main()
{
    int arr[] = {1, 2, 2, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = is_sorted(arr, size);

    if (result == 1)
    {
        printf("A tomb rendezett.\n");
    }
    else
    {
        printf("A tomb NEM rendezett.\n");
    }

    return 0;
}

int is_sorted(int arr[], int size)
{
    if (size <= 1)
    {
        return 1;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }

    return 1;
}