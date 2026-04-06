#include <stdio.h>
#include <string.h>

void abcfeltoltes(char *str);

int main(void)
{
    char angolabc[27];

    abcfeltoltes(angolabc);

    printf("%s\n", angolabc);

    return 0;
}

void abcfeltoltes(char *str)
{
    for (int i = 0; i < 26; i++)
    {
        str[i] = 'a' + i;
    }

    str[26] = '\0';
}