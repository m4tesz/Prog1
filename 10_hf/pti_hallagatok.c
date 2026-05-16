#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SOR 100
#define MAX_HOSSZ 100

void toLowerCase(char *s) {
    for (int i = 0; s[i]; i++) {
        s[i] = tolower((unsigned char)s[i]);
    }
}

void capitalize(char *s) {
    if (s[0]) {
        s[0] = toupper((unsigned char)s[0]);
    }

    for (int i = 1; s[i]; i++) {
        s[i] = tolower((unsigned char)s[i]);
    }
}

int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    FILE *f = fopen("nevek.csv", "r");

    if (f == NULL) {
        printf("Nem sikerult megnyitni a fajlt.\n");
        return 1;
    }

    char sor[MAX_HOSSZ];
    char pti_nevek[MAX_SOR][MAX_HOSSZ];
    int db = 0;

    while (fgets(sor, sizeof(sor), f)) {
        char nev[MAX_HOSSZ];
        int eletkor;
        char szak[MAX_HOSSZ];

        if (sscanf(sor, "%[^,],%d,%s", nev, &eletkor, szak) == 3) {

            toLowerCase(szak);

            if (strcmp(szak, "pti") == 0) {

                capitalize(nev);

                strcpy(pti_nevek[db], nev);
                db++;
            }
        }
    }

    fclose(f);

    qsort(pti_nevek, db, sizeof(pti_nevek[0]), compare);

    for (int i = 0; i < db; i++) {
        printf("%s", pti_nevek[i]);

        if (i < db - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}