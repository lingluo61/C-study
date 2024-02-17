/*
    通过指针间接修改身高
*/

#include <stdio.h>

void hiroko(int *height)
{
    if (*height < 180)
        *height = 180;
}

int main(void)
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    hiroko(&masaki);

    printf("sato = %d\n", sato);
    printf("sanaka = %d\n", sanaka);
    printf("masaki = %d\n", masaki);

    return 0;
}