#define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #include <string.h>
// #define num 128
//
// void rev_string(char s[])
//{
//     int i;
//     int g = strlen(s);
//     for (i = 0; i < (g / 2); i++)
//     {
//         int tem = s[i];
//         s[i] = s[g - i - 1];
//         s[g - i - 1] = tem;
//     }
//     int j = 0;
//     while (s[j])
//     {
//         putchar(s[j++]);
//     }
// }
//
// int main()
//{
//     char x[num];
//     scanf("%s", x);
//     printf("%s", x);
//     putchar('\n');
//     rev_string(x);
//
//     return 0;
// }