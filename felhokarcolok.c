#include <stdio.h>

int magassagkul(int arr[], int size);

int main()
{
    int felhokarcolo[] = {2, 1, 0, 2, 4};
    int size = sizeof(felhokarcolo) / sizeof(felhokarcolo[0]);

    int sum = magassagkul(felhokarcolo, size);

    printf("A szomszédos felhőkarcolók magasságkülönbségének összege: %d\n", sum);

    return 0;
}

int magassagkul(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size - 1; i++)
    {
        int diff = arr[i] - arr[i + 1];

        if (diff < 0)
        {
            diff = -diff;
        }

        sum += diff;
    }

    return sum;
}