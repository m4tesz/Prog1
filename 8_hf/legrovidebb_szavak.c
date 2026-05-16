#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Nem adtal meg egyetlen szot sem!\n");
        return 1;
    }

    int minHossz = strlen(argv[1]);

    for (int i = 2; i < argc; i++)
    {
        int hossz = strlen(argv[i]);

        if (hossz < minHossz)
        {
            minHossz = hossz;
        }
    }

    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) == minHossz)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}