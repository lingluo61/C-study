#include <stdio.h>

void del_digit(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] > '0' && s[i] < '9')
        {
            i++;
        }
        else
        {
            putchar(s[i]);
            i++;
        }
    }
}

int main(void)
{
    char str[] = "AB1C2";
    del_digit(str);

    return 0;
}