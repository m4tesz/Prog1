#include <stdio.h>

void print_array(int arr[], int size);

int main(void)
{
    int arr[] = {4, 7, 34, 23, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, size);

    return 0;
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);

        if (i < size - 1)
        {
            printf(", ");
        }
    }

    printf("\n");
}