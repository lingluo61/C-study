#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0)
        *n = 0;
    if (*n > 100)
        *n = 100;
}

int main(void)
{
    int num = 120;
    int *pn = &num;

    adjust_point(pn);

    printf("%d\n", num);

    return 0;
}