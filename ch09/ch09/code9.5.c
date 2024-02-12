#define _CRT_SECURE_NO_WARNINGS

/*
	格式化字符串"12345"并显示
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "12345";
//
//	printf("%s\n", str);         //12345       （原样输出）
//	printf("%3s\n", str);        //12345       （至少输出三位）
//	printf("%.3s\n", str);       //123         （至多输出三位）
//	printf("%8s\n", str);        //   12345    （右对齐）
//	printf("%-8s\n", str);       //12345       （左对齐）
//
//	return 0;
//}

/*
	字符串数组
*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char cs[][6] = { "Turbo","NA","DOHC" };
//
//	for (i = 0; i < 3; i++)
//		printf("cs[%d] = \"%s\"\n", i, cs[i]);
//
//	return 0;
//}

/*
	读取并显示字符串数组
*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char s[3][128];
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("s[%d]：", i);
//		scanf("%s", s[i]);
//	}
//	for (i = 0; i < 3; i++)
//		printf("s[%d] = \"%s\"\n", i, s[i]);
//
//	return 0;
//}

/*
	练习9-3
*/
//#include <stdio.h>
//
//#define NUM 5
//
//int main(void)
//{
//  int i;
//  char s[NUM][128];
//  for (i = 0; i < NUM; i++)
//  {
//    printf("s[%d]:", i);
//    scanf("%s", s[i]);
//    if (strcmp(s[i], "$$$$$") == 0)
//      break;
//  }
//  for (i = 0; i < NUM; i++)
//  {
//    if (strcmp(s[i], "$$$$$") == 0)
//      break;
//    else
//      printf("s[%d] = \"%s\"\n", i, s[i]);
//  }
//
//  return 0;
//}