#include <stdio.h>
#include <string.h>

void rev_string(char s[][128], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int g = strlen(s[i]);
        int j;
        for (j = 0; j < g / 2; j++)
        {
            int tmp = s[i][j];
            s[i][j] = s[i][g - j - 1];
            s[i][g - j - 1] = tmp;
        }
    }
}

int main(void)
{
    int i;
    char s[][128] = {"SEC", "ABC"};
    puts("交换前：");
    for (i = 0; i < 2; i++)
    {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
    rev_string(s, 2);
    puts("交换后：");
    for (i = 0; i < 2; i++)
    {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}