/*
    通过指针间接地操作身高
*/

#include <stdio.h>

int main(void)
{
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    int *isako, *hiroko;

    isako = &sato;
    hiroko = &masaki;

    printf("*isako = %d\n", *isako);
    printf("*hiroko = %d\n", *hiroko);

    isako = &sanaka;

    *hiroko = 180;

    putchar('\n');
    printf("sato = %d\n", sato);
    printf("sanaka = %d\n", sanaka);
    printf("masaki = %d\n", masaki);
    printf("*isako = %d\n", *isako);
    printf("*hiroko = %d\n", *hiroko);

    return 0;
}