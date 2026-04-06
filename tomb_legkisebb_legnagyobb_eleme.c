#include <stdio.h>

int min(int arr[], int size);
int max(int arr[], int size);

int main()
{
    int arr[] = {4, 7, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minimum = min(arr, size);
    int maximum = max(arr, size);

    printf("Legkisebb elem: %d\n", minimum);
    printf("Legnagyobb elem: %d\n", maximum);

    return 0;
}

int min(int arr[], int size)
{
    int min_value = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min_value)
        {
            min_value = arr[i];
        }
    }

    return min_value;
}

int max(int arr[], int size)
{
    int max_value = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }

    return max_value;
}