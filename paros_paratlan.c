#include <stdio.h>

int is_even(int n);
int is_odd(int n);

int main()
{
    int n;

    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &n);

    if (is_even(n) == 1)
    {
        printf("A szam paros.\n");
    }
    else
    {
        printf("A szam NEM paros.\n");
    }

    if (is_odd(n) == 1)
    {
        printf("A szam paratlan.\n");
    }
    else
    {
        printf("A szam NEM paratlan.\n");
    }

    return 0;
}

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }

    return 0;
}

int is_odd(int n)
{
    if (is_even(n) == 1)
    {
        return 0;
    }

    return 1;
}