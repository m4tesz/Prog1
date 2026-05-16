#include <stdio.h>

int main()
{
    FILE *in, *out;
    double szam;
    int db = 0;

    in = fopen("in.txt", "r");
    if (in == NULL)
    {
        printf("Hiba: in.txt nem nyithato meg!\n");
        return 1;
    }

    printf("# in.txt sikeresen megnyitva\n");
    printf("# 0,5-nel nagyobb szamok szurese...\n");

    out = fopen("out.txt", "w");
    if (out == NULL)
    {
        printf("Hiba: out.txt nem nyithato meg!\n");
        fclose(in);
        return 1;
    }

    while (fscanf(in, "%lf", &szam) == 1)
    {
        if (szam > 0.5)
        {
            fprintf(out, "%.15lf\n", szam);
            db++;
        }
    }

    printf("# szures vege\n");

    fclose(in);
    printf("# in.txt bezarva\n");

    fclose(out);
    printf("# out.txt bezarva\n");

    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", db);

    return 0;
}