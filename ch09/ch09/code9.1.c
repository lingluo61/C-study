#define _CRT_SECURE_NO_WARNINGS

/*
	显示字符串字面量的长度
*/
//#include <stdio.h>
//
//int main(void)
//{
//	printf("sizeof(\"123\")          = %u\n", (unsigned)sizeof("123"));
//	printf("sizeof(\"AB\\tC\")        = %u\n", (unsigned)sizeof("AB\tC"));
//	printf("sizeof(\"abc\\0def\")     = %u\n", (unsigned)sizeof("abc\0def"));
//
//	return 0;
//}

/*
	给字符串存储在数组中并显示（其1：赋值）
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char str[4];
//
//	str[0] = 'A';
//	str[1] = 'B';
//	str[2] = 'C';
//	str[3] = '\0';
//
//	printf("字符串str为\"%s\"。\n", str);
//
//	return 0;
//}

/*
	给字符串存储在数组中并显示（其2：初始化）
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "ABC";
//
//	printf("字符串str为\"%s\"。\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "ABC\0EF";    // 字符串在 \0 结束
//
//	printf("字符串str为\"%s\"。\n", str);
//
//	return 0;
//}

/*
	询问名字并显示问候语（读取字符串）
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char name[48];
//
//	printf("请输入你的名字：");
//	scanf("%s", name);
//
//	printf("你好，%s 先生/女士\n", name);
//
//	return 0;
//}

/*
	练习9-2
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char s[] = "ABC";
//	printf("\"%s\"\n", s);
//	s[0] = '\0';
//	printf("\"%s\"\n", s);
//
//	return 0;
//}