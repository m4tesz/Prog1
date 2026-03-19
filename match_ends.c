#include "prog1.h"
#include <stdio.h>

int stringhossz(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int match_ends(int n, string words[])
{
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        int len = stringhossz(words[i]);

        if (len >= 2 && words[i][0] == words[i][len - 1])
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    int eredmeny1 = match_ends(szavak1_meret, szavak1);
    printf("Eredmeéy 1: %d\n", eredmeny1); // elvart: 3

    string szavak2[] = { "", "x", "xy", "xyx", "xx" };
    int szavak2_meret = 5;

    int eredmeny2 = match_ends(szavak2_meret, szavak2);
    printf("Eredmény 2: %d\n", eredmeny2); // elvart: 2

    string szavak3[] = { "aaa", "be", "abc", "hello" };
    int szavak3_meret = 4;

    int eredmeny3 = match_ends(szavak3_meret, szavak3);
    printf("Eredmény 3: %d\n", eredmeny3); // elvart: 1

    return 0;
}