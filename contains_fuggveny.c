#include <stdio.h>

int contains(int arr[], int size, int value);

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int value;

    printf("Milyen erteket keresel? ");
    scanf("%d", &value);

    if (contains(arr, size, value) == 1)
    {
        printf("Az ertek szerepel a tombben.\n");
    }
    else
    {
        printf("Az ertek NEM szerepel a tombben.\n");
    }
    
    return 0;
}

int contains(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return 1;
        }
    }

    return 0;
}