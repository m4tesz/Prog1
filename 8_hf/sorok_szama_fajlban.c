#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        fprintf(stderr,
                "Hiba! A %s nevu file-t nem sikerult megnyitni!\n",
                argv[1]);
        return 1;
    }

    int ch;
    int sorok = 0;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            sorok++;
        }
    }

    printf("%d\n", sorok);

    fclose(fp);

    return 0;
}