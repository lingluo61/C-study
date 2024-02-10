#define _CRT_SECURE_NO_WARNINGS

/*
	计算标准输入流中出现的数字字符数（第二版）
*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i, ch;
//	int cnt[10] = { 0 };
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= '0' && ch <= '9')
//			cnt[ch - '0']++;
//	}
//
//	puts("数字字符的出现次数");
//	for (i = 0; i < 10; i++)
//	{
//		printf("'%d'：%d\n", i, cnt[i]);
//	}
//
//	return 0;
//}

/*
	显示EOF和数字字符的值
*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//
//	printf("EOF = %d\n", EOF);
//	for (i = 0; i < 10; i++)
//		printf("'%d'：%d\n", i, '0' + i);
//
//	return 0;
//}