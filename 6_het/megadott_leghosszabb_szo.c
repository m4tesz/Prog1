#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void)
{
    char word[MAX_LEN];
    int count = 0;
    int max_length = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1)
    {
        printf("Szó: ");
        if (!fgets(word, MAX_LEN, stdin))
        {
            break;
        }

        size_t len = strlen(word);
        if (len > 0 && word[len - 1] == '\n')
        {
            word[len - 1] = '\0';
            len--;
        }

        if (len > 0 && word[0] == '*')
        {
            break;
        }

        count++;
        if ((int)len > max_length)
        {
            max_length = (int)len;
        }
    }

    printf("\n%d db szót adtál meg.\n", count);
    printf("A leghosszabb szó %d karakterből áll.\n", max_length);

    return 0;
}
