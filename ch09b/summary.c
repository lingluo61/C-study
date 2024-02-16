/*
    遍历字符串并显示
*/
#include <stdio.h>

#define STR_LENGTH 128

/*显示字符串 s 及其构成字符*/
void put_string_rep(const char s[])
{
    int i = 0;
    while (s[i])
        putchar(s[i++]);
    printf(" {");
    i = 0;
    while (s[i])
    {
        printf(" \'");
        putchar(s[i++]);
        putchar('\'');
    }
    printf(" '\\0' }\n");
}

int main(void)
{
    int i;
    char s[STR_LENGTH];
    char ss[5][STR_LENGTH];

    printf("字符串 s ：");
    scanf("%s", s);

    printf("请输入5个字符串。\n");
    for (i = 0; i < 5; i++)
    {
        printf("ss[%d] ：", i);
        scanf("%s", ss[i]);
    }
    printf("字符串 s ：");
    put_string_rep(s);

    printf("字符串数组ss\n");
    for (i = 0; i < 5; i++)
    {
        printf("ss[%d] ：", i);
        put_string_rep(ss[i]);
    }
}