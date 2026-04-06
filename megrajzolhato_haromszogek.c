#include <stdio.h>

int valid_triangle(double a, double b, double c);

int main()
{
    double a, b, c;

    printf("a oldal: ");
    scanf("%lf", &a);

    printf("b oldal: ");
    scanf("%lf", &b);

    printf("c oldal: ");
    scanf("%lf", &c);

    int result = valid_triangle(a, b, c);

    if (result == 1)
    {
        printf("A háromszög megszerkeszthető.\n");
    }
    else
    {
        printf("A háromszög nem szerkeszthető meg.\n");
    }

    return 0;
}

int valid_triangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 0;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return 0;
    }

    return 1;
}